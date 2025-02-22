use uo;
use os;
use util;

/*
	Random Human Skin Hue
*/
function RandomHumanSkinHue()
	return CInt( RandomDiceRoll( "1d57+1001" ) + 32768 );
endfunction

/*
	Random Elven Skin Hue
*/
function RandomElvenSkinHue()
	var hues := { 0x4DE, 0x76C, 0x835, 0x430, 0x24D, 0x24E, 0x24F, 0x0BF,
				  0x4A7, 0x361, 0x375, 0x367, 0x3E8, 0x3DE, 0x353, 0x903,
				  0x76D, 0x384, 0x579, 0x3E9, 0x374, 0x389, 0x385, 0x376,
				  0x53F, 0x381, 0x382, 0x383, 0x76B, 0x3E5, 0x51D, 0x3E6 };

	return hues[RandomDiceRoll( "1d"+hues.Size() )];
endfunction

function RandomTigerHue()
	var hue := 0;
	if( RandomDiceRoll( "1d1000" ) == 500 )
		hue := 2500;
	endif

	return hue;
endfunction

function RandomSheepHue()
	var hue := 0;
	if( RandomDiceRoll( "1d850" ) == 428 )
		hue := 1109;
	endif

	return hue;
endfunction

function RandomSnakeHue()
	return RandomDiceRoll( "1d19+2000" );
endfunction

function RandomBirdHue()
	return RandomDiceRoll( "1d31+2100" );
endfunction

function RandomSlimeHue()
	return RandomDiceRoll( "1d25+2200" );
endfunction

function RandomAnimalHue()
	return RandomDiceRoll( "1d19+2300" );
endfunction
