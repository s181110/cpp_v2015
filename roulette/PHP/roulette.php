<?php

function spin(){
        return rand(0,1);
    }

    if(isset($argv[1]))
        $spins = $argv[1];
    else
        $spins = 10000;
    $rnd = spin();
    $result = array(0,0);
    $seq = 1;
    $seqs = array();
    for($i=0;$i<50;$i++)
        array_push($seqs, NULL);

    for($i=0; $i < $spins; $i++)
    {
        $result[$rnd]++;
        $lastRnd = $rnd;
        $rnd = spin();
        if($lastRnd == $rnd)
        {
            $seq++;
        }
        else
        {
            if($seqs[$seq] == NULL)
            {
                $seqs[$seq] = 1;
            }
            else
            {
                $seqs[$seq]++;
            }
            $seq = 1;
        }
    }
    echo "Sekvenser etter $spins spinn:\n";
    echo "Lengde\tAntall\n";
    foreach($seqs as $length => $count)
    {
        if($count > 0)
        {
            echo "$length\t$count\n";
        }
    }

?>