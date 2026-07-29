
# total hours spent on project: 25

# Schematic 5.5 hrs

<img src="https://github.com/user-attachments/assets/8814d4eb-1bdf-4fa3-8ecc-f2d002a4dd66" width="600" />
<img width="300" alt="image" src="https://github.com/user-attachments/assets/20bdfa40-1c97-44cc-b755-35901925c92a"  />
i followed the tutorial on blurprint to make the schematic for the lora module, im using all of these in my schematic, the tutorial contained outdated instructions and symbols for these so i had to ask around slack and stalk other ppl's repos to find what exactly to use 

SX1262IMLTRT 
RP2040 
0900FM15D0039E as an RF filter.
AP2112K-3.3 as my LDO.
PE4259 as my RF switch.
Two quartz timer crystals (12 MHz and 32 MHz).

hrs spent: 5.5 total: 5.5

# more schematic 3 hrs
this is my first time doing rf stuff so im a bit cooked, i had to redo the schematic cuz after 2 month of not working on this. i realised i had a lot of stuff that was not gonna work. like the decoupling capacitors, and a few other parts. lots of them have updated symbols now so i had to upload those too so ive redone this schematic today morning.

hrs spent: 3 total: 8.5

<img src="https://github.com/user-attachments/assets/199368c6-b253-4709-9395-1d5412cb05ab" width="500" />

# pcb! 6 hrs 
i just found all the foorprints for this lora module and tried to place this shi and failed a few times. this is the final placemnt i landed on. it was after looking at a buncha lora modules from other ppl, rf needs pretty good placement where stuff is really close to each other.  after this i routed everything so it works properly! during the routing i had to redo it a few times cuz the traces kept colliding and i cant have that if i want this thing to even work. its still really shitty routing im prolly gonna work more on it tonight.

hrs spent: 6 total: 14.5

<img src="https://github.com/user-attachments/assets/34115625-28a3-44af-a800-8db7d5b3e267" width="400" /> <img src="https://github.com/user-attachments/assets/76c5ddcc-91e8-4582-bcf4-ca2b6dcb13a3" width="400" /> <img src="https://github.com/user-attachments/assets/03672fe6-7950-4b2b-a5eb-183c4d648fc9" width="400" />

# pcb 2 hrs 
for this devlog i routed the pcb yet again after it started to take up way too much space. the vias were also becoming a problem cuz they wouldnt let the other traces go thru and i'd have to make this a 4 layer pcb and those are not any fun to route.

hrs spent: 2 total: 16.5

<img src="https://github.com/user-attachments/assets/6941df73-5ed4-454a-8d3e-d6e6e8a63448" width="200" /> <img src="https://github.com/user-attachments/assets/ef14415d-c394-4288-ac50-1afce161c80e" width="200" />

# fixed all the drc erros! 2.5 hrs
i fixed a lot of clearence erros and traces being too close together, i had to reroute some of the pcb cuz it gave me shit tons of errors. i also missed quite a few of these compoenents so i connectors those too.

<img src="https://github.com/user-attachments/assets/77b0c47d-d812-483e-bc94-82f1bed330ed" width="200" /> <img src="https://github.com/user-attachments/assets/a950c631-1d3e-478c-9de8-3022afaf0a67" width="200" />

hrs spent: 2.5 total: 19 hrs

# more pcb stuff 6 hours
i asked soup for some feedback and apparently my routing is dogshit and will not work at all so now im gonna redo the entire routing and placement. most of the issues that seem to be happening with stuff like shielding and routing RF traces. the SX 1262 and both crystals also need to be re routed. souptik seems to think that all my rf stuff is way too far away which i agree with, these r way to far from each other and its usually supposed to be 23 mm wide
time spent: 6 hrs , total:  25 hours

<img src="https://github.com/user-attachments/assets/ded8327d-fec9-4670-9461-400b1063da55" width="200" /> <img src="https://github.com/user-attachments/assets/6e5f26e9-9f44-4962-8bb4-8b2d220fc8f2" width="200" /> <img src="https://github.com/user-attachments/assets/8e804afd-8dea-48eb-93a7-223b243fc5ba" width="200" />

<img src="https://github.com/user-attachments/assets/af4789ef-c20c-4a69-a903-c06ad1a76637" width="200" /> <img src="https://github.com/user-attachments/assets/72bca2bd-c762-4a18-93bb-ec1c714461c6" width="200" /> <img src="https://github.com/user-attachments/assets/15b9e8c0-b20f-4059-b36a-be5fad39fc11" width="200" />

<img src="https://github.com/user-attachments/assets/fef14d0b-af10-4eef-9570-9deb8d9fae4d" width="200" /> <img src="https://github.com/user-attachments/assets/924196fd-67ea-46a4-aae5-2ebc67dafb45" width="200" /> <img src="https://github.com/user-attachments/assets/84bde100-e518-4653-9299-3b9166df5397" width="200" />

