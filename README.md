# Effektiv kode med C og C++
*DAVE3605, Vår 2015*

## NYHETER
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
