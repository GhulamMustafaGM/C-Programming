//Pokedex, numbers 1-36.
//Additions 37+ & Edits

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int UserPokemon;
    cout << "Please enter the Pokemon's Pokedex number:" << endl;
    cin >> UserPokemon;
    //Using a very large if else statement to cout the info of each Pokemon. This could also be done using classes or a switch statement.
    if (UserPokemon == 1)
    {
        cout << "No.1 Bulbasaur" << endl;
        cout << "Type: Grass" << endl;
        cout << "Movelist: Vine Whip, Razor Leaf, Sleep Powder, Poison Powder, Stun Spore, Aromatheraphy, etc." << endl;
        cout << "Evolution: Evolves to Ivysaur Lv.16." << endl;
    }
    else if (UserPokemon == 2)
    {
        cout << "No.2 Ivysaur" << endl;
        cout << "Type: Grass" << endl;
        cout << "Movelist: Vine Whip, Razor Leaf, Sleep Powder, Poison Powder, Stun Spore, Aromatheraphy, etc." << endl;
        cout << "Evolution: Evolves to Venasaur Lv.36." << endl;
    }
    else if (UserPokemon == 3)
    {
        cout << "No.3 Venasaur" << endl;
        cout << "Type: Grass & Poison " << endl;
        cout << "Movelist: Vine Whip, Razor Leaf, Sleep Powder, Poison Powder, Stun Spore, Aromatheraphy, Leaf Blade, Leaf Storm, Synthesis, Solar Beam." << endl;
        cout << "Evolution: No Further Evolutions" << endl;
    }
    else if (UserPokemon == 4)
    {
        cout << "No.4 Charmander" << endl;
        cout << "Type: Fire" << endl;
        cout << "Movelist: Ember, Flamethrower, Fireblast, Sunny Day, Leer, Growl, Scary Face, Flare Blitz, Firespin." << endl;
        cout << "Evolution: Evolves to Charmeleon Lv.16." << endl;
    }
    else if (UserPokemon == 5)
    {
        cout << "No.5 Charmeleon" << endl;
        cout << "Type: Fire" << endl;
        cout << "Movelist: Ember, Flamethrower, Fireblast, Sunny Day, Leer, Growl, Scary Face, Flare Blitz, Firespin." << endl;
        cout << "Evolution: Evolves to Charizard Lv.36." << endl;
    }
    else if (UserPokemon == 6)
    {
        cout << "No.6 Charizard" << endl;
        cout << "Type: Fire/Flying" << endl;
        cout << "Movelist: Ember, Flamethrower, Fireblast, Sunny Day, Leer, Growl, Scary Face, Flare Blitz, Firespin, Blast Burn, Wing Attack." << endl;
        cout << "Evolution: No Further Evolutions." << endl;
    }
    else if (UserPokemon == 7)
    {
        cout << "No.7 Squirtle" << endl;
        cout << "Type: Water" << endl;
        cout << "Movelist: Bubblebeam, Bubble, Withdraw, Tackle, Hydro Pump, Water Pulse, Watergun." << endl;
        cout << "Evolution: Evolves to Wartortle Lv.16." << endl;
    }
    else if (UserPokemon == 8)
    {
        cout << "No.8 Wartortle" << endl;
        cout << "Type: Water" << endl;
        cout << "Movelist: Bubblebeam, Bubble, Withdraw, Tackle, Hydro Pump, Water Pulse, Watergun." << endl;
        cout << "Evolution: Evolves to Blastoise Lv.36." << endl;
    }
    else if (UserPokemon == 9)
    {
        cout << "No.9 Blastoise" << endl;
        cout << "Type: Water" << endl;
        cout << "Movelist: Hydro Pump, Watergun, Water Pulse, Skull Bash, Iron Defense, Surf, Rain Dance, Hydro Cannon." << endl;
        cout << "Evolution: No Further Evolutions." << endl;
    }
    else if (UserPokemon == 10)
    {
        cout << "No.10 Caterpie" << endl;
        cout << "Type: Bug" << endl;
        cout << "Movelist: Tackle, String Shot, Poison Sting." << endl;
        cout << "Evolution: Evolves to Metapod Lv.6 or 7." << endl;
    }
    else if (UserPokemon == 11)
    {
        cout << "No.11 Metapod" << endl;
        cout << "Type: Bug" << endl;
        cout << "Movelist: Tackle, String Shot, Poison Sting, Harden." << endl;
        cout << "Evolution: Evolves to Butterfree Lv.10." << endl;
    }
    else if (UserPokemon == 12)
    {
        cout << "No.12 Butterfree" << endl;
        cout << "Type: Bug/Flying" << endl;
        cout << "Movelist: Tackle, String Shot, Poison Sting, Harden, Stun Spore, Sleep Powder, Gust, Poison Powder." << endl;
        cout << "Evolution: No Further Evolutions." << endl;
    }
    else if (UserPokemon == 13)
    {
        cout << "No.13 Weedle" << endl;
        cout << "Type: Bug/Poison" << endl;
        cout << "Movelist: tackle, string shot, poison sting" << endl;
        cout << "Evolution: Evolves to Kakuna Lv.6 or 7" << endl;
    }
    else if (UserPokemon == 14)
    {
        cout << "No.14  Kakuna" << endl;
        cout << "Type: Bug/Poison" << endl;
        cout << "Movelist: tackle, string shot, poison sting, harden" << endl;
        cout << "Evolution: Evolves to Beedrill Lv.10" << endl;
    }
    else if (UserPokemon == 15)
    {
        cout << "No.15 Beedrill " << endl;
        cout << "Type: Bug/Poison" << endl;
        cout << "Movelist: tackle, string shot, poison sting, twineedle, megahorn" << endl;
        cout << "Evolution: No further evolutions" << endl;
    }
    else if (UserPokemon == 16)
    {
        cout << "No.16  Pidgey" << endl;
        cout << "Type: Normal/Flying" << endl;
        cout << "Movelist: tackle, gust, wing attack, ariel ace, fly, peck, drill peck, sky drop, growl" << endl;
        cout << "Evolution: Evolves to Pidgeotto Lv.14" << endl;
    }
    else if (UserPokemon == 17)
    {
        cout << "No.17  Pidgeotto" << endl;
        cout << "Type: Normal/Flying" << endl;
        cout << "Movelist: tackle, gust, wing attack, ariel ace, fly, peck, drill peck, sky drop, growl, brave bird, sky attack" << endl;
        cout << "Evolution: Evolves to Pidgeot Lv.32" << endl;
    }
    else if (UserPokemon == 18)
    {
        cout << "No.18  Pidgeot" << endl;
        cout << "Type: Normal/Flying" << endl;
        cout << "Movelist: tackle, gust, wing attack, ariel ace, fly, peck, drill peck, sky drop, growl, brave bird, sky attack" << endl;
        cout << "Evolution: No further evolutions." << endl;
    }
    else if (UserPokemon == 19)
    {
        cout << "No.19  Rattata" << endl;
        cout << "Type: Normal" << endl;
        cout << "Movelist: tackle, bite, hyperfang, superfang, scaryface, growl, thief, leer" << endl;
        cout << "Evolution: Evolves to Raticate Lv.18." << endl;
    }
    else if (UserPokemon == 20)
    {
        cout << "No.20  Raticate" << endl;
        cout << "Type: Normal" << endl;
        cout << "Movelist: tackle, bite, hyperfang, superfang, scaryface, growl, thief, leer" << endl;
        cout << "Evolution: No further Evolutions" << endl;
    }
    else if (UserPokemon == 21)
    {
        cout << "No.21 Spearow" << endl;
        cout << "Type: Normal/Flying" << endl;
        cout << "Movelist: tackle, gust, wing attack, ariel ace, fly, peck, drill peck, sky drop, growl, brave bird, sky attack" << endl;
        cout << "Evolution: Evolves to Fearow Lv.24" << endl;
    }
    else if (UserPokemon == 22)
    {
        cout << "No.22 Fearow" << endl;
        cout << "Type: Normal/Flying" << endl;
        cout << "Movelist: tackle, gust, wing attack, ariel ace, fly, peck, drill peck, sky drop, growl, brave bird, sky attack" << endl;
        cout << "Evolution: No Further Evolutions" << endl;
    }
    else if (UserPokemon == 23)
    {
        cout << " No.23  Ekans" << endl;
        cout << "Type: Poison" << endl;
        cout << "Movelist: Poison fang, coil, glare, scaryface, wrap, poison sting, poison tail" << endl;
        cout << "Evolution: Evolves to Arabok" << endl;
    }
    else if (UserPokemon == 24)
    {
        cout << " No.24  Arabok" << endl;
        cout << "Type: Poison" << endl;
        cout << "Movelist: Poison fang, coil, glare, scaryface, wrap, poison sting, poison tail" << endl;
        cout << "Evolution: No Further Evolutions" << endl;
    }
    else if (UserPokemon == 25)
    {
        cout << " No.25 Pikachu" << endl;
        cout << "Type: Electric" << endl;
        cout << "Movelist: Thundershock, thunderbolt, thunder,irontail, volt tackle, electroball, shockwave, thunderwave, voltswitch" << endl;
        cout << "Evolution: Evolves into Raichu using a Thundestone" << endl;
    }
    else if (UserPokemon == 26)
    {
        cout << " No.26 Raichu" << endl;
        cout << "Type: Electric" << endl;
        cout << "Movelist: Thundershock, thunderbolt, thunder,irontail, volt tackle, electroball, shockwave, thunderwave, voltswitch" << endl;
        cout << "Evolution: No Further Evolutions" << endl;
    }
    else if (UserPokemon == 27)
    {
        cout << " No.27 Sandshrew" << endl;
        cout << "Type: Ground" << endl;
        cout << "Movelist: Dig, earthquake, Slash, double kick, growl, sand-attack " << endl;
        cout << "Evolution: Evolves into Sandslash" << endl;
    }
    else if (UserPokemon == 28)
    {
        cout << " No.28 Sandslash " << endl;
        cout << "Type: Ground" << endl;
        cout << "Movelist: Dig, earthquake, Slash, double kick, growl, sand-attack " << endl;
        cout << "Evolution: No Further Evolutions" << endl;
    }
    else if (UserPokemon == 29)
    {
        cout << " No.29  Nidoran F" << endl;
        cout << "Type: Poison" << endl;
        cout << "Movelist: Poison fang, coil, glare, scaryface, wrap, poison sting, poison tail" << endl;
        cout << "Evolution: Evolves to Nidorina" << endl;
    }
    else if (UserPokemon == 30)
    {
        cout << " No.30  Nidorina" << endl;
        cout << "Type: Poison" << endl;
        cout << "Movelist: Poison fang, coil, glare, scaryface, wrap, poison sting, poison tail" << endl;
        cout << "Evolution: Evolves to Nidoqueen" << endl;
    }
    else if (UserPokemon == 31)
    {
        cout << " No.31 Nidoqueen" << endl;
        cout << "Type: Poison/Ground" << endl;
        cout << "Movelist: Poison fang, coil, glare, scaryface, wrap, poison sting, poison tail" << endl;
        cout << "Evolution: No Further Evolutions" << endl;
    }
    else if (UserPokemon == 32)
    {
        cout << " No.32 Nidoran M" << endl;
        cout << "Type: Poison" << endl;
        cout << "Movelist: Poison fang, coil, glare, scaryface, wrap, poison sting, poison tail" << endl;
        cout << "Evolution: Evolves to Nidorino" << endl;
    }
    else if (UserPokemon == 33)
    {
        cout << " No.33  Nidorino" << endl;
        cout << "Type: Poison" << endl;
        cout << "Movelist: Poison fang, coil, glare, scaryface, wrap, poison sting, poison tail" << endl;
        cout << "Evolution: Evolves to Nidoking" << endl;
    }
    else if (UserPokemon == 34)
    {
        cout << " No.34  Nidoking" << endl;
        cout << "Type: Poison/Ground" << endl;
        cout << "Movelist: Poison fang, coil, glare, scaryface, wrap, poison sting, poison tail" << endl;
        cout << "Evolution: No Further Evolutions " << endl;
    }
    else if (UserPokemon == 35)
    {
        cout << "No.35  Clefairy" << endl;
        cout << "Type: Normal" << endl;
        cout << "Movelist: pound,metronome,confuse ray, doubleslap, swift" << endl;
        cout << "Evolution: Evolves into Clefable using a Moonstone" << endl;
    }
    else if (UserPokemon == 36)
    {
        cout << "No.36 Clefable" << endl;
        cout << "type: Normal" << endl;
        cout << "Movelist: pound, metronome, swift, doubleslap" << endl;
        cout << "Evolution: No Further Evolution." << endl;
    }
    else if (UserPokemon == 37)
    {
        cout << "No.37 Vulpix" << endl;
        cout << "Type: Fire" << endl;
        cout << "Movelist: Ember, Tail Whip, Quick Attack, Roar." << endl;
        cout << "Evolution: Evolves into Ninetails using a Firestone." << endl;
    }
    else if (UserPokemon == 38)
    {
        cout << "No.38 Ninetails" << endl;
        cout << "Type: Fire" << endl;
        cout << "Movelist: Ember, Flamethrower, Quick Attack, Fire Spin." << endl;
        cout << "Evolution: No Further Evolution." << endl;
    }
    else if (UserPokemon == 39)
    {
        cout << "No.39 Jigglypuff" << endl;
        cout << "Type: Normal/Fairy" << endl;
        cout << "Movelist: Sing, Pound, Defense Curl, Double Slap." << endl;
        cout << "Evolution: Evolves into Wigglytuff using a Moonstone." << endl;
    }
    else if (UserPokemon == 40)
    {
        cout << "No.40 Wigglytuff" << endl;
        cout << "Type: Normal/Fairy" << endl;
        cout << "Movelist: Sing, Body Slam, Double-Edge, Double Slap." << endl;
        cout << "Evolution: No Further Evolutions." << endl;
    }
    else if (UserPokemon == 41)
    {
        cout << "No.41 Zubat" << endl;
        cout << "Type: Poison/Flying" << endl;
        cout << "Movelist: Leech Life, Supersonic, Bite, Confuse Ray." << endl;
        cout << "Evolution: Evolves to Golbat Lv.22." << endl;
    }
    else if (UserPokemon == 42)
    {
        cout << "No.42 Golbat" << endl;
        cout << "Type: Poison/Flying" << endl;
        cout << "Movelist: Leech Life, Supersonic, Bite, Confuse Ray, Wing Attack, Haze." << endl;
        cout << "Evolution: No Further Evolutions." << endl;
    }
    else if (UserPokemon == 43)
    {
        cout << "No.43 Oddish" << endl;
        cout << "Type: Grass/Poison" << endl;
        cout << "Movelist: Absorb, Poison Powder, Stun Spore, Sleep Powder." << endl;
        cout << "Evolution: Evolves to Gloom Lv.21." << endl;
    }
    else if (UserPokemon == 44)
    {
        cout << "No.44 Gloom" << endl;
        cout << "Type: Grass/Poison" << endl;
        cout << "Movelist: Absorb, Poison Powder, Stun Spore, Sleep Powder, Acid, Petal Dance." << endl;
        cout << "Evolution: Evolves to Vileplume using a Leafstone." << endl;
    }
    else if (UserPokemon == 45)
    {
        cout << "No.45 Vileplume" << endl;
        cout << "Type: Grass/Poison" << endl;
        cout << "Movelist: Absorb, Poison Powder, Stun Spore, Sleep Powder, Acid, Petal Dance, Solar Beam." << endl;
        cout << "Evolution: No Further Evolutions." << endl;
    }
    else if (UserPokemon == 46)
    {
        cout << "No.46 Paras" << endl;
        cout << "Type: Bug/Grass" << endl;
        cout << "Movelist: Scratch, Stun Spore, Leech Life, Spore." << endl;
        cout << "Evolution: Evolves to Parasect Lv.24." << endl;
    }
    else if (UserPokemon == 47)
    {
        cout << "No.47 Parasect" << endl;
        cout << "Type: Bug/Grass" << endl;
        cout << "Movelist: Scratch, Stun Spore, Leech Life, Spore, Slash, Growth." << endl;
        cout << "Evolution: No Further Evolutions." << endl;
    }
    else if (UserPokemon == 48)
    {
        cout << "No.48 Venonat" << endl;
        cout << "Type: Bug/Poison" << endl;
        cout << "Movelist: Tackle, Disable, Supersonic, Confusion." << endl;
        cout << "Evolution: Evolves to Venomoth Lv.31." << endl;
    }
    else if (UserPokemon == 49)
    {
        cout << "No.49 Venomoth" << endl;
        cout << "Type: Bug/Poison" << endl;
        cout << "Movelist: Tackle, Psybeam, Supersonic, Confusion, Psychic." << endl;
        cout << "Evolution: No Further Evolutions." << endl;
    }
    else if (UserPokemon == 50)
    {
        cout << "No.50 Diglett" << endl;
        cout << "Type: Ground" << endl;
        cout << "Movelist: Scratch, Growl, Dig, Sand Attack." << endl;
        cout << "Evolution: Evolves to Dugtrio Lv.26." << endl;
    }
    else if (UserPokemon == 51)
    {
        cout << "No.51 Dugtrio" << endl;
        cout << "Type: Ground" << endl;
        cout << "Movelist: Scratch, Growl, Dig, Sand Attack, Slash, Earthquake." << endl;
        cout << "Evolution: No Further Evolutions." << endl;
    }
    else if (UserPokemon == 52)
    {
        cout << "No.52 Meowth" << endl;
        cout << "Type: Normal" << endl;
        cout << "Movelist: Scratch, Growl, Bite, Pay Day." << endl;
        cout << "Evolution: Evolves to Persian Lv.28." << endl;
    }
    else if (UserPokemon == 53)
    {
        cout << "No.53 Persian" << endl;
        cout << "Type: Normal" << endl;
        cout << "Movelist: Scratch, Fury Swipes, Bite, Pay Day, Slash." << endl;
        cout << "Evolution: No Further Evolutions." << endl;
    }
    else if (UserPokemon == 54)
    {
        cout << "No.54 Psyduck" << endl;
        cout << "Type: Water" << endl;
        cout << "Movelist: Scratch, Tail Whip, Disable, Confusion." << endl;
        cout << "Evolution: Evolves to Golduck Lv.33." << endl;
    }
    else if (UserPokemon == 55)
    {
        cout << "No.55 Golduck" << endl;
        cout << "Type: Water" << endl;
        cout << "Movelist: Scratch, Tail Whip, Disable, Confusion, Fury Swipes, Hydro Pump." << endl;
        cout << "Evolution: No Further Evolutions." << endl;
    }
    else if (UserPokemon == 56)
    {
        cout << "No.56 Mankey" << endl;
        cout << "Type: Fight" << endl;
        cout << "Movelist: Scratch, Leer, LowKick, Karate Chop." << endl;
        cout << "Evolution: Evolves to Primeape Lv.28." << endl;
    }
    else if (UserPokemon == 57)
    {
        cout << "No.57 Primeape" << endl;
        cout << "Type: Fight" << endl;
        cout << "Movelist: Scratch, Leer, LowKick, Karate Chop, Fury Swipes, Seismic Toss." << endl;
        cout << "Evolution: No Further Evolutions." << endl;
    }
    else if (UserPokemon == 58)
    {
        cout << "No.58 Growlithe" << endl;
        cout << "Type: Fire" << endl;
        cout << "Movelist: Bite, Roar, Ember, Leer." << endl;
        cout << "Evolution: Evolves into Arcanine using a Firestone." << endl;
    }
    else if (UserPokemon == 59)
    {
        cout << "No.59 Arcanine" << endl;
        cout << "Type: Fire" << endl;
        cout << "Movelist: Bite, Take Down, Ember, Flamethrower." << endl;
        cout << "Evolution: No Further Evolutions." << endl;
    }
    else if (UserPokemon == 60)
    {
        cout << "No.60 Poliwag" << endl;
        cout << "Type: Water" << endl;
        cout << "Movelist: Bubble, Hypnosis, Water Gun." << endl;
        cout << "Evolves to Poliwhirl Lv.25." << endl;
    }
    else if (UserPokemon == 61)
    {
        cout << "No.61 Poliwhirl" << endl;
        cout << "Type: Water" << endl;
        cout << "Movelist: Bubble, Hypnosis, Water Gun, Double Slap, Body Slam." << endl;
        cout << "Evolves into Poliwrath using a Water Stone." << endl;
    }
    else if (UserPokemon == 62)
    {
        cout << "No.62 Poliwrath" << endl;
        cout << "Type: Water" << endl;
        cout << "Movelist: Bubble, Hypnosis, Water Gun, Double Slap, Body Slam, Hydro Pump." << endl;
        cout << "No Further Evolutions." << endl;
    }
    else if (UserPokemon == 63)
    {
        cout << "No.63 Abra" << endl;
        cout << "Type: Psychic" << endl;
        cout << "Movelist: Teleport." << endl;
        cout << "Evolves to Kadabra Lv.16." << endl;
    }
    else if (UserPokemon == 64)
    {
        cout << "No.64 Kadabra" << endl;
        cout << "Type: Psychic" << endl;
        cout << "Movelist: Teleport, Confusion, Disable, Psybeam." << endl;
        cout << "Evolves to Alakazam through trade." << endl;
    }
    else if (UserPokemon == 65)
    {
        cout << "No.65 Alakazam" << endl;
        cout << "Type: Psychic" << endl;
        cout << "Movelist: Teleport, Confusion, Disable, Psybeam, Recover, Psychic." << endl;
        cout << "No Further Evolutions." << endl;
    }
    else if (UserPokemon == 66)
    {
        cout << "No.66 Machop" << endl;
        cout << "Type: Fight" << endl;
        cout << "Movelist: Karate Chop, Low Kick, Leer, Focus Energy." << endl;
        cout << "Evolves to Machoke Lv.28." << endl;
    }
    else if (UserPokemon == 67)
    {
        cout << "No.67 Machoke" << endl;
        cout << "Type: Fight" << endl;
        cout << "Movelist: Karate Chop, Low Kick, Leer, Focus Energy, Seismic Toss." << endl;
        cout << "Evolves to Machamp through trade." << endl;
    }
    else if (UserPokemon == 68)
    {
        cout << "No.68 Machamp" << endl;
        cout << "Type: Fight" << endl;
        cout << "Movelist: Karate Chop, Low Kick, Leer, Focus Energy, Seismic Toss, Submission." << endl;
        cout << "No Further Evolutions." << endl;
    }
    else if (UserPokemon == 69)
    {
        cout << "No.69 Bellsprout" << endl;
        cout << "Type: Grass/Poison" << endl;
        cout << "Movelist: Vine Whip, Growth, Wrap, Poison Powder." << endl;
        cout << "Evolves to Weepinbell Lv.21." << endl;
    }
    else if (UserPokemon == 70)
    {
        cout << "No.70 Weepinbell" << endl;
        cout << "Type: Grass/Poison" << endl;
        cout << "Movelist: Vine Whip, Growth, Wrap, Poison Powder, Sleep Powder, Stun Spore." << endl;
        cout << "Evolves into Victreebel using a Leaf Stone." << endl;
    }
    else if (UserPokemon == 71)
    {
        cout << "No.71 Victreebel" << endl;
        cout << "Type: Grass/Poison" << endl;
        cout << "Movelist: Vine Whip, Growth, Wrap, Poison Powder, Sleep Powder, Stun Spore, Acid, Razor Leaf." << endl;
        cout << "No Further Evolutions." << endl;
    }
    else if (UserPokemon == 72)
    {
        cout << "No.72 Tentacool" << endl;
        cout << "Type: Water/Poison" << endl;
        cout << "Movelist: Acid, Supersonic, Wrap, Poison Sting." << endl;
        cout << "Evolves to Tentacruel Lv.30." << endl;
    }
    else if (UserPokemon == 73)
    {
        cout << "No.73 Tentacruel" << endl;
        cout << "Type: Water/Poison" << endl;
        cout << "Movelist: Acid, Supersonic, Wrap, Poison Sting, Water Gun, Constrict, Barrier." << endl;
        cout << "No Further Evolutions." << endl;
    }
    else if (UserPokemon == 74)
    {
        cout << "No.74 Geodude" << endl;
        cout << "Type: Rock/Ground" << endl;
        cout << "Movelist: Tackle, Defense Curl, Rock Throw, Self Destruct." << endl;
        cout << "Evolves to Graveler Lv.25." << endl;
    }
    else if (UserPokemon == 75)
    {
        cout << "No.75 Graveler" << endl;
        cout << "Type: Rock/Ground" << endl;
        cout << "Movelist: Tackle, Defense Curl, Rock Throw, Self Destruct, Harden, Earthquake." << endl;
        cout << "Evolves to Golem through trade." << endl;
    }
    else if (UserPokemon == 76)
    {
        cout << "No.76 Golem" << endl;
        cout << "Type: Rock/Ground" << endl;
        cout << "Movelist: Tackle, Defense Curl, Rock Throw, Self Destruct, Harden, Earthquake, Explosion." << endl;
        cout << "No Further Evolutions." << endl;
    }
    else if (UserPokemon == 77)
    {
        cout << "No.77 Ponyta" << endl;
        cout << "Type: Fire" << endl;
        cout << "Movelist: Ember, Tail Whip, Stomp, Growl." << endl;
        cout << "Evolves to Rapidash Lv.40." << endl;
    }
    else if (UserPokemon == 78)
    {
        cout << "No.78 Rapidash" << endl;
        cout << "Type: Fire" << endl;
        cout << "Movelist: Ember, Tail Whip, Stomp, Growl, Fire Spin, Take Down." << endl;
        cout << "No Further Evolutions." << endl;
    }
    else if (UserPokemon == 79)
    {
        cout << "No.79 Slowpoke" << endl;
        cout << "Type: Water/Psychic" << endl;
        cout << "Movelist: Confusion, Disable, Headbutt, Growl." << endl;
        cout << "Evolves to Slowbro Lv.37." << endl;
    }
    else if (UserPokemon == 80)
    {
        cout << "No.80 Slowbro" << endl;
        cout << "Type: Water/Psychic" << endl;
        cout << "Movelist: Confusion, Disable, Headbutt, Growl, Water Gun, Withdraw." << endl;
        cout << "Evolves to Slowking through trade while holding a King's Rock." << endl;
    }
    else if (UserPokemon == 81)
    {
        cout << "No.81 Magnemite" << endl;
        cout << "Type: Electric/Steel" << endl;
        cout << "Movelist: Tackle, Sonic Boom, Thunder Shock, Supersonic." << endl;
        cout << "Evolves to Magneton Lv.30." << endl;
    }
    else if (UserPokemon == 82)
    {
        cout << "No.82 Magneton" << endl;
        cout << "Type: Electric/Steel" << endl;
        cout << "Movelist: Tackle, Sonic Boom, Thunder Shock, Supersonic, Thunder Wave, Swift." << endl;
        cout << "No Further Evolutions." << endl;
    }
    else if (UserPokemon == 83)
    {
        cout << "No.83 Farfetch'd" << endl;
        cout << "Type: Normal/Flying" << endl;
        cout << "Movelist: Peck, Sand Attack, Leer, Fury Attack, Swords Dance." << endl;
        cout << "No Further Evolutions." << endl;
    }
    else if (UserPokemon == 84)
    {
        cout << "No.84 Doduo" << endl;
        cout << "Type: Normal/Flying" << endl;
        cout << "Movelist: Peck, Growl, Fury Attack, Drill Peck." << endl;
        cout << "Evolves to Dodrio Lv.31." << endl;
    }
    else if (UserPokemon == 85)
    {
        cout << "No.85 Dodrio" << endl;
        cout << "Type: Normal/Flying" << endl;
        cout << "Movelist: Peck, Fury Attack, Drill Peck, Rage, Tri Attack" << endl;
        cout << "No Further Evolutions." << endl;
    }

    return 0;
}