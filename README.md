# Effektiv kode med C og C++
*DAVE3605, Vår 2015*
* **Faglærer:** Alfred Bratterud - alfred.bratterud æt hioa.no
* **Stud.ass:** Andreas Åkesson - s188900 æt stud.hioa.no

## NYHETER
* **10.03.15: Dagens opplegg - viktig at det gjennomføres!**
  1. Se videoforelesning om grunnleggende bruk av templates her: [720p](https://screencast.uninett.no/relay/ansatt/alfrebhioa.no/2015/09.03/2324600/Templates_Basics_-_20150309_205003_36.html), [480p](https://screencast.uninett.no/relay/ansatt/alfrebhioa.no/2015/09.03/2324600/Templates_Basics_-_20150309_205003_38.html)
  2. Svar på [5 spørsmål om hvordan dette fungerte.](http://goo.gl/forms/EmRY9xzTi9)
  3. Les litt mer detaljert om dette i boken, kap. 19, minst tom. kap. 19.3
  4. Gjør oppgaver fra boken om templates: "Drill" Kap. 19, Exercises kap.19, nr. 1-7 
  5. Fortsett gjerne med kapitel 19.4 og utover - det går da over i ressurshåndtering, og et "pattern", RAII, som vi har snakket litt om før, og som vi kommer tilbake til.
  6. **Oblig 2:** Denne kommer så fort jeg klarer å få den ferdig, senest neste tirsdag. I mellomtiden *bruk tiden godt* på å komme ajour med oppgaver!
* **09.03.15: Videoforelesning i morgen**. Jeg er fortsatt hjemme med feber og influensa (veldig ergelig for oss alle), men jeg har laget en videoforelesning til i morgen. Den blir lagt ut her, før ordinært forelesningstidspunkt. 
  * **OBS** Selv om jeg ikke dukker opp for å smitte deg fysisk - *hold tempoet oppe!* Oblig2 er rett rundt hjørnet, og da blir det forventet at alt som er gått igjennom, og gitt i oppgaver til nå, skal sitte. 
  * Andreas dukker opp på lab i morgen, og det kommer egne oppgaver til dagens tema (templates), i tillegg til de mange som ligger ute fra før. 
  * I tillegg kan du alltid sende meg faglige spørsmål på e-post. Ren debugging må du klare selv, men ingen spørsmål er i utgangspunktet for dumme - og heller ikke for vanskelige. Jeg svarer ikke på minuttet, men alle som har spurt har fått svar.
* **04.03.15: Tilbakemeldinger på oblig1 ute.** Alle skal ha fått tilbakemelding på sin oblig1. Dette er blitt lagt til i fila `FEEDBACK.md` direkte i ditt repository. 
  * Hvis du har fått beskjed om å levere på nytt: Du har da **1 ukes frist**, dvs. innen neste onsdag kl. 02:00 til å committe dine endringer (da puller vi). Siden oblig2 kommer denne dagen blir dette siste sjanse - så *make it count*.
  * Hvis du har faglige spørsmål til din feedback, kontakt Andreas. Han vil ta det videre med meg hvis nødvendig.
  * **OBS:** *Dersom du mangler feedback, og mener du burde fått det, ta kontakt med alfred på e-post ASAP.* 
* **03.03.15: Tilbakemeldinger på oblig1 på vei.** Jeg er hjemme med en syk 3-åring, men jobber med å få ut alle tilbakemeldinger. Alle er rettet, de kommer ut fortløpende utover dagen.
* **02.03.15: Forelesning i morgen avlyst.** Her er vi syke alle mann; datteren min er hjemme fra barnehage på tredje dagen og jeg har det samme viruset selv. Jeg prøver å få laget en video-forelesning for å få dekket det vi ikke rekker i morgen, evt. ta det i neste uke. **PS:** Andreas er på lab, og jeg regner med at dere  har nok av oppgaver å jobbe med. Ellers skal jeg legge ut enda fler. 
* **24.02.15: Lab i dag** Siden vi har mange 2.klasse-ingeniører som har fysikk nå, tar jeg *kodeeksempler i plenum kl. 14:30*. Frem til da - gjør oppgaver! Flere er på vei, veldig snart. 
  * **Oblig 1**: Du kan forberede deg på å få obligen i retur hvis en av punktene under ikke er oppfylt. Vet du at det er tilfelle er det lurt å sette i gang med å jobbe videre med dette nå! 
    * Det skal være med en Makefile, slik at koden kompilerer med `make` (se oppgaveteksten). Det lå en fin makefile med oppgaven som enkelt kan tilpasses.
    * Man må minst kunne spille en enkel runde blackjack, med en spiller.
    * Det skal ikke være minnelekkasjer. Prøv å kjøre koden din med feks. `valgrind ./blackjack`, for å se "Leak summary"
    * `oppvarming` må gi gyldig output - dvs. tre tekster på vanlig engelsk.
    * Alt skal kjøre på Linux - samme versjon som VM'en (Ubuntu 14.04).
    * Det kan ikke være noen alvorlige kjøretidsfeil, som "segfault" ved normal bruk. 
    * Det må være en liten rapport, "RAPPORT.md" som kort oppsummerer hvordan programmet ditt er tenkt / virker. En liten tegning (flytdiagram / klassediagram) anbefales - det blir et krav senere.
* **16.02.15: Undervisningsfri i morgen**. Som det står i [semesterplanen for kurset](./Semesterplan_CPP_2015.pdf) er det ingen undervisning i morgen, fordi dette er bestemt i [semesterplanen for fakultetet](http://www.hioa.no/Studier-og-kurs/TKD/Undervisnings-og-semesterplaner/Semesterplan-tekniske-studier-2014-2015). Men, Andreas blir å finne på lab, så kom gjerne og løs oppgaver - det er gått igjennom en del nytt stoff som bør sitte når oblig2 kommer ut. 
* **09.02.15: Sjekkliste for link på fronter** Det er mange som har levert link på fronter - men ikke alle. Her er en sjekkliste - som gjelder **alle** - har du gjort noe annet enn det som står på listen, eller fått en kommentar på fronter, gå inn og endre:
  1. **Alle skal levere link** - dette gjelder også dere som har fått gitlab-konto; det er først når dere lager repo at det blir en link, og den trenger vi.
  2. **Ikke laste opp linken som en fil**, bare velge "Create link"
    * **Skriv inn URL'en både under "Url" og "Title"** (da blir det lettere å hente ut 50+ stykker)
  4. **Du skal kun levere 1 link**. Det er ikke OK med flere, fordi det da blir uklart hvilken som gjelder. Har du levert flere, bare fjern den ene.
  5. **Linken skal være https-linken til ditt repo - ikke til en undermappe** under ditt repo, og ikke til din bruker.
  6. **Jeg må ha lese- og skrivetilgang**. Brukeren `alfred-bratterud` har fått tilgang på github / brukeren `alfreb` på gitlab. Trenger pushe-tilgang for å gi tilbakemeldinger.
* **05.02.15: Alle som har spurt skal ha fått gitlab-konto**: *Dersom du ikke har fått mail fra gitlab, eller fra meg nå, eller av en eller annen grunn mangler noe for å levere oblig1, send meg beskjed asap!* **OBS: bruk https-linken** når dere kommuniserer med gitlab via git, for å autentisere med deres gitlab brukernavn og passord. Dere kan også bruke SSH-linken, men dere må da legge inn en ssh-nøkkel under deres profil på gitlab (samme gjelder github). Fordelen da er at dere slipper brukernavn og passord. Https-linken funker imidlertid med deres gitlab brukernavn og passord og en helt grei løsning. Følg instruksjonene som ligger på gitlab-siden når dere har opprettet et privat prosjekt; den forteller hvilke git-kommandoer dere skal kjøre for å få opp koden deres. Kommandoene skal funke både fra kurs-vm'en og fra studssh.
* **04.02.15: Github/Gitlab**: Jeg har fremdeles ikke rukket å legge inn alle som har bedt om gitlab-bruker, men alle som har sendt e-post om dette vil få svar i løpet av morgendagen, og trenger ikke bekymre seg. Dere som hverken har sendt e-post eller registrert github-link må sende meg e-post asap., med emne "github" eller "gitlab". 
* **03.02.15: random_shuffle**: Det var mange spørsmål på lab i dag om bruk av `random_shuffle`. Jeg har nå implementert shuffling med både nye og gamle random-generatorer i [./shuffle.cpp](./shuffle.cpp), med noen eksempler. Mange av feilene jeg så på lab har jeg ikke klart å gjenskape - jeg anbefaler derfor på det sterkeste at alle kjører på Linux, med ny versjon av GCC.  **OBS:** Send meg gjerne info om problemer dere finner rundt dette, som ikke dekkes av eksemplene! **PS:** Dere trenger ikke bruke random_shuffle i oblig1 - det er veldig enkelt å lage egen funksjon for å stokke kort også - helt valgfritt :-)
* **03.02.15: Oblig1 og Git - VIKTIG**: 
  * Husk at ***ingen skal legget ut noen ting fra obligen i et "public" repo.*** Det blir det samme som juks!
  * Alle som nå ikke har fått github-bruker må sende meg mail ASAP, med subject "github". Jeg lager da en gitlab-bruker til deg. Du må ha et ***fungerende repo oppe innen i morgen*** - da vil jeg forsøke å klone alle og sjekke at det virker.
  * Min bruker - "alfred-bratterud" på github og "alfreb" på gitlab, må ha *lese- og pushe-rettigheter* i ditt repo (fikses under "collaborators"). Lese for å klone, pushe for å gi tilbakemeldinger.
* **29.01.15: Gitlab.** Jeg har nå opprettet gitlab-brukere til alle som har sendt meg forespørsel om dette (7 stk.). Dere skal ha fått en mail med link til der dere kan sette passord. Linken utløper etter en stund - hvis den gjør det kan dere gå til hovedsiden for gitlab-serveren [git.cs.hioa.no](git.cs.hioa.no), og velge "Forgot your password".  **OBS:** *Alle som har tenkt å levere oblig1 er nødt til å ha levert en link til enten gihtub, eller gitlab, via fronter innen neste tirsdag!*
* **29.01.15:** Semesterplanen er rettet. Den var full av gale datoer, pga. skjulte, gale årstall i Excel-cellene mine. Det er rettet nå, så sørg for å oppdatere deres kalendere! **PS:** Ang. presentasjoner av prosjektoppgaven blir det umulig å si pga. barnefødsel. Det blir imidlertid enten i god tid før, eller rett etter fristen for bacheloroppgave. Dette er obligatorisk.
* **27.01.15:** Oblig 1 lagt ut! Alt ligger under [./oblig1](./oblig1). **OBS:** Er det feil, uklarheter eller spørsmål rundt obligen, post en issue under issue-trackeren her på github!
* Andreas har laget løsningsforslag til I/O-delen av forrige ukes oppgaver. Flere er på vei. Bra jobba Åkesson!
* **Kodeeksempler + artig ting**: Kodeeksempler fra dagens forelesning er lagt ut her: [./f2/vector_pointers_arrays.cpp](./f2/vector_pointers_arrays.cpp). Den artige tingen var at jeg fullførte det jeg var i gang med, som var å finne adressen til C++-strengen, og sammenlikne den med C-strengen vi 'oppdaget' at lå ved siden av 's'. En minikonkurranse for de som er *spesielt interesserte*: 
  * Sjekk koden (nå tilpasset linux-vm'en) og legg merke til adressen til C++-strengen (modern.c_str()). Hvorfor er ikke denne i nærheten av stringen vi fant?
  * Prøv å endre innholdet til stringen vi "oppdaget". Endrer det C++-strengen? Går det an i det hele tatt? (det er jo ingen ting const i vår definisjon). 
  * Åpne den kompilerte binærfila i emacs (ja!). Her får du et hint om hva som skjer. Du kan finne ut enda mer med `readelf`evt. `objdump`. 
  * **OBS:** Dette er laaangt utenfor pensum og er kun for spesielt interesserte og har ingen ting å si for kurset, men allikevel; 5 twist + heder og ære til den som kan forklare nøyaktig hva som foregår, på e-post til meg, før neste lab. Jeg vet det ;-)
* **Oppgaver** om dagens tema +++ er nå lagt ut under [./oppgaver.md](./oppgaver.md). Jobb gjerne videre med Roulette-oppgaven i C++ også; vi kommer til å komme tilbake til denne, og jeg har fått inn implementasjoner i Java, PHP og D, i tillegg til Python - takk for bidragene! 
* **Github-link** kan nå leveres inn på fronter.
   * Du må først opprette et *privat* github-repository for dette kurset
      * For å få private repositories gratis må du registrere deg som student på [github.com/edu](http://github.com/edu), med din hioa-adresse. Denne skal være på "whitelist" og du vil da automatisk bli godkjent. Det kan ta litt tid, men ikke mange dager.
   * Kun du og `alfred-bratterud` skal ha tilgang (du må gi tilgang under "settings") til ditt repository
   * Levér link til ditt repo på fronter, under Innlevering. 
   * Velg "Create"->"Link" og fyll ut din URL både under "url" og "title" (da blir det lettere for meg å kopiere)
* **Roulette-oppgaven** ligger nå under [./f1/roulette.md](./f1/roulette.md)
* **studssh** er et alternativ for å komme i gang. Du trenger da:
   * En terminal med ssh. Innebygget i mac og Linux, for Windows bruk [Putty](http://www.putty.org/)
   * Logg inn med `sxxxxxx@studssh.cs.hioa.no`
* **Virtuell maskin**, med ferdig oppsett: [last ned her](https://www.dropbox.com/s/ihgkpu92vgtus3z/ubuntu_cpp2015.ova?dl=0)
   * Inneholder Linux - "Lubuntu", en lettvekts "Ubuntu" (raskere/enklere GUI)
   * Brukernavn: `developer` Passord: `hioa`
   * Har git, gcc, emacs og Sublime text installert
   * Maskinen kjøres med VirtualBox, som må [lastes ned og installeres](https://www.virtualbox.org/wiki/Downloads). Følg deretter [denne guiden](http://docs.oracle.com/cd/E26217_01/E26796/html/qs-import-vm.html) for å importere VM'en over.
   * **Problemer?** 
     * Flere får en advarsel om "Network settings" når de importerer. Her er det bare å deaktivere "Adapter 2". Hvis man ønsker to nettverkskort (feks. for å kunne gå inn i VM'en via ssh) kan man google litt for å finne fornuftige innstillinger for Adapter 2 på ditt OS.
     * Noen maskiner har ikke "virtualization extensions" aktivert for sin CPU (Intel VT-x / AMD-V). Dette må da aktiveres i din BIOS. BIOS er det som starter operativsystemet - vanligvis kommer man dit ved å trykke en bestemt tast, som F2, F12 el. rett etter reboot. Dette varierer veldig fra maskin til maskin, så google for å finne ut hvordan du kommer inn i BIOS på din maskin, og evt. for å finne ut hvordan du aktiverer virtualisering. 
     * **OBS:** Noen maskiner, særlig litt eldre, har ikke støtte for å kjøre virtuelle 64-bit maskiner i det hele tatt. Jeg kommer til å legge ut en 32-bit versjon hvis dette gjelder mange.
* **Første forelesning:** Tirsdag 06.01.15, Kl.10:30, PI254
