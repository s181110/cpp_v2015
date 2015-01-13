# Effektiv kode med C og C++ 
*DAVE3605, Vår 2015*

## NYHETER
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
   * Har git, gcc, emacs og Sublime text installert
   * Maskinen kjøres med VirtualBox, som må [lastes ned og installeres](https://www.virtualbox.org/wiki/Downloads). Følg deretter [denne guiden](http://docs.oracle.com/cd/E26217_01/E26796/html/qs-import-vm.html) for å importere VM'en over.
   * **Problemer?** 
     * Flere får en advarsel om "Network settings" når de importerer. Her er det bare å deaktivere "Adapter 2". Hvis man ønsker to nettverkskort (feks. for å kunne gå inn i VM'en via ssh) kan man google litt for å finne fornuftige innstillinger for Adapter 2 på ditt OS.
     * Noen maskiner har ikke "virtualization extensions" aktivert for sin CPU (Intel VT-x / AMD-V). Dette må da aktiveres i din BIOS. BIOS er det som starter operativsystemet - vanligvis kommer man dit ved å trykke en bestemt tast, som F2, F12 el. rett etter reboot. Dette varierer veldig fra maskin til maskin, så google for å finne ut hvordan du kommer inn i BIOS på din maskin, og evt. for å finne ut hvordan du aktiverer virtualisering. 
     * **OBS:** Noen maskiner, særlig litt eldre, har ikke støtte for å kjøre virtuelle 64-bit maskiner i det hele tatt. Jeg kommer til å legge ut en 32-bit versjon hvis dette gjelder mange.
* **Første forelesning:** Tirsdag 06.01.15, Kl.10:30, PI254
