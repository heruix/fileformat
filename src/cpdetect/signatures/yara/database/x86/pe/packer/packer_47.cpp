/**
 * @file src/cpdetect/signatures/yara/database/x86/pe/packer/packer_47.cpp
 * @brief Database of signatures.
 * @copyright (c) 2017 Avast Software, licensed under the MIT license
 */

const char *x86PePacker_47 =
R"x86_pe_packer(
rule rule_1264_SafeDisc {
	meta:
		tool = "P"
		name = "SafeDisc"
		version = "4"
		pattern = "000000000000000000000000426F475F"
	strings:
		$1 = { 00 00 00 00 00 00 00 00 00 00 00 00 42 6F 47 5F }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1265_SafeDisc {
	meta:
		tool = "P"
		name = "SafeDisc"
		version = "4.50.000"
		pattern = "558BEC60BB6E??????B80D??????33C98A0885C9740CB8E4??????2BC383E805EB0E51B92B??????8BC12BC303410159C603E98943015168D9??????33C085C974058B4508EB0050E825FCFFFF83C4085983F800741CC603C2C643010C85C97409615DB800000000EB9650B8F9??????FF10615DEB47807C2408007540518B4C2404890D????????B902??????894C240459EB2950B8FD??????FF70088B400CFFD0B8FD??????FF308B4004FFD058B825??????FF30C372166113600DE9????????66833D??????????7405E991FEFFFFC3"
	strings:
		$1 = { 55 8B EC 60 BB 6E ?? ?? ?? B8 0D ?? ?? ?? 33 C9 8A 08 85 C9 74 0C B8 E4 ?? ?? ?? 2B C3 83 E8 05 EB 0E 51 B9 2B ?? ?? ?? 8B C1 2B C3 03 41 01 59 C6 03 E9 89 43 01 51 68 D9 ?? ?? ?? 33 C0 85 C9 74 05 8B 45 08 EB 00 50 E8 25 FC FF FF 83 C4 08 59 83 F8 00 74 1C C6 03 C2 C6 43 01 0C 85 C9 74 09 61 5D B8 00 00 00 00 EB 96 50 B8 F9 ?? ?? ?? FF 10 61 5D EB 47 80 7C 24 08 00 75 40 51 8B 4C 24 04 89 0D ?? ?? ?? ?? B9 02 ?? ?? ?? 89 4C 24 04 59 EB 29 50 B8 FD ?? ?? ?? FF 70 08 8B 40 0C FF D0 B8 FD ?? ?? ?? FF 30 8B 40 04 FF D0 58 B8 25 ?? ?? ?? FF 30 C3 72 16 61 13 60 0D E9 ?? ?? ?? ?? 66 83 3D ?? ?? ?? ?? ?? 74 05 E9 91 FE FF FF C3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1266_SafeGuard {
	meta:
		tool = "P"
		name = "SafeGuard"
		version = "1.0X"
		pattern = "E800000000EB29????????????????????????????????????????????????????599C81C1E2FFFFFFEB01??9DFFE1"
	strings:
		$1 = { E8 00 00 00 00 EB 29 ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? ?? 59 9C 81 C1 E2 FF FF FF EB 01 ?? 9D FF E1 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1267_SC_Obfuscator {
	meta:
		tool = "P"
		name = "SC Obfuscator"
		pattern = "6033C98B1D????????031D????????8A041984C074093C??740534??880419413B0D????????75E7A1????????0105????????61FF25"
	strings:
		$1 = { 60 33 C9 8B 1D ?? ?? ?? ?? 03 1D ?? ?? ?? ?? 8A 04 19 84 C0 74 09 3C ?? 74 05 34 ?? 88 04 19 41 3B 0D ?? ?? ?? ?? 75 E7 A1 ?? ?? ?? ?? 01 05 ?? ?? ?? ?? 61 FF 25 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1268_SCRAM {
	meta:
		tool = "P"
		name = "SCRAM!"
		version = "0.8a1"
		pattern = "B430CD213C0277??CD20BC????B9????8BFCB2??584C"
	strings:
		$1 = { B4 30 CD 21 3C 02 77 ?? CD 20 BC ?? ?? B9 ?? ?? 8B FC B2 ?? 58 4C }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1269_SCRAM {
	meta:
		tool = "P"
		name = "SCRAM!"
		version = "C5"
		pattern = "B8????509D9C5825????75??BA????B409CD21CD20"
	strings:
		$1 = { B8 ?? ?? 50 9D 9C 58 25 ?? ?? 75 ?? BA ?? ?? B4 09 CD 21 CD 20 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1270_SDC {
	meta:
		tool = "P"
		name = "SDC"
		version = "1.2"
		pattern = "5589E583EC08C7042401000000FF15A0914000E8DBFEFFFF5589E55383EC148B45088B008B003D910000C0773B3D8D0000C0724BBB01000000C744240400000000C7042408000000E8CE24000083F8010F84C400000085C00F85A900000031C083C4145B5DC204003D940000C074563D960000C0741E3D930000C075E1EBB53D050000C08DB4260000000074433D1D0000C075CAC744240400000000C7042404000000E87324000083F8010F849900000085C074A9C7042404000000FFD0B8FFFFFFFFEB9B31DB8D742600E969FFFFFFC744240400000000C704240B000000E83724000083F801747F85C00F846DFFFFFFC704240B0000008D7600FFD0B8FFFFFFFFE959FFFFFFC7042408000000FFD0B8FFFFFFFFE946FFFFFFC744240401000000C7042408000000E8ED230000B8FFFFFFFF85DB0F8425FFFFFFE8DB150000B8FFFFFFFFE916FFFFFFC744240401000000C7042404000000E8BD230000B8FFFFFFFFE9F8FEFFFFC744240401000000C704240B000000E89F230000B8FFFFFFFFE9DAFEFFFF"
	strings:
		$1 = { 55 89 E5 83 EC 08 C7 04 24 01 00 00 00 FF 15 A0 91 40 00 E8 DB FE FF FF 55 89 E5 53 83 EC 14 8B 45 08 8B 00 8B 00 3D 91 00 00 C0 77 3B 3D 8D 00 00 C0 72 4B BB 01 00 00 00 C7 44 24 04 00 00 00 00 C7 04 24 08 00 00 00 E8 CE 24 00 00 83 F8 01 0F 84 C4 00 00 00 85 C0 0F 85 A9 00 00 00 31 C0 83 C4 14 5B 5D C2 04 00 3D 94 00 00 C0 74 56 3D 96 00 00 C0 74 1E 3D 93 00 00 C0 75 E1 EB B5 3D 05 00 00 C0 8D B4 26 00 00 00 00 74 43 3D 1D 00 00 C0 75 CA C7 44 24 04 00 00 00 00 C7 04 24 04 00 00 00 E8 73 24 00 00 83 F8 01 0F 84 99 00 00 00 85 C0 74 A9 C7 04 24 04 00 00 00 FF D0 B8 FF FF FF FF EB 9B 31 DB 8D 74 26 00 E9 69 FF FF FF C7 44 24 04 00 00 00 00 C7 04 24 0B 00 00 00 E8 37 24 00 00 83 F8 01 74 7F 85 C0 0F 84 6D FF FF FF C7 04 24 0B 00 00 00 8D 76 00 FF D0 B8 FF FF FF FF E9 59 FF FF FF C7 04 24 08 00 00 00 FF D0 B8 FF FF FF FF E9 46 FF FF FF C7 44 24 04 01 00 00 00 C7 04 24 08 00 00 00 E8 ED 23 00 00 B8 FF FF FF FF 85 DB 0F 84 25 FF FF FF E8 DB 15 00 00 B8 FF FF FF FF E9 16 FF FF FF C7 44 24 04 01 00 00 00 C7 04 24 04 00 00 00 E8 BD 23 00 00 B8 FF FF FF FF E9 F8 FE FF FF C7 44 24 04 01 00 00 00 C7 04 24 0B 00 00 00 E8 9F 23 00 00 B8 FF FF FF FF E9 DA FE FF FF }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1271_SDProtector {
	meta:
		tool = "P"
		name = "SDProtector"
		pattern = "558BEC6AFF68????????688888880864A10000000050648925000000005864A300000000585858588BE8E83B000000E801000000FF5805"
	strings:
		$1 = { 55 8B EC 6A FF 68 ?? ?? ?? ?? 68 88 88 88 08 64 A1 00 00 00 00 50 64 89 25 00 00 00 00 58 64 A3 00 00 00 00 58 58 58 58 8B E8 E8 3B 00 00 00 E8 01 00 00 00 FF 58 05 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1272_SDProtector {
	meta:
		tool = "P"
		name = "SDProtector"
		version = "1.1x"
		pattern = "558BEC6AFF68????????688888880864A1"
	strings:
		$1 = { 55 8B EC 6A FF 68 ?? ?? ?? ?? 68 88 88 88 08 64 A1 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1273_SDProtector {
	meta:
		tool = "P"
		name = "SDProtector"
		version = "1.10 Basic or Pro Edition"
		pattern = "558BEC6AFF681D321305688888880864A10000000050648925000000005864A300000000585858588BE85083EC0864A10000000064FF35000000006489250000000083C4085064FF350000000064892500000000648F050000000064A30000000083C4085874077505193267E8E874277525EB00EBFC683944CD00599C50740F750DE859C20400558BECE9FAFFFF0EE8EFFFFFFF565753780F790DE8349947493433EF31345247"
	strings:
		$1 = { 55 8B EC 6A FF 68 1D 32 13 05 68 88 88 88 08 64 A1 00 00 00 00 50 64 89 25 00 00 00 00 58 64 A3 00 00 00 00 58 58 58 58 8B E8 50 83 EC 08 64 A1 00 00 00 00 64 FF 35 00 00 00 00 64 89 25 00 00 00 00 83 C4 08 50 64 FF 35 00 00 00 00 64 89 25 00 00 00 00 64 8F 05 00 00 00 00 64 A3 00 00 00 00 83 C4 08 58 74 07 75 05 19 32 67 E8 E8 74 27 75 25 EB 00 EB FC 68 39 44 CD 00 59 9C 50 74 0F 75 0D E8 59 C2 04 00 55 8B EC E9 FA FF FF 0E E8 EF FF FF FF 56 57 53 78 0F 79 0D E8 34 99 47 49 34 33 EF 31 34 52 47 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1274_SDProtector {
	meta:
		tool = "P"
		name = "SDProtector"
		version = "1.10 Basic or Pro Edition"
		pattern = "558BEC6AFF681D321305688888880864A10000000050648925000000005864A300000000585858588BE85083EC0864A10000000064FF35000000006489250000000083C4085064FF35000000006489250000000064"
	strings:
		$1 = { 55 8B EC 6A FF 68 1D 32 13 05 68 88 88 88 08 64 A1 00 00 00 00 50 64 89 25 00 00 00 00 58 64 A3 00 00 00 00 58 58 58 58 8B E8 50 83 EC 08 64 A1 00 00 00 00 64 FF 35 00 00 00 00 64 89 25 00 00 00 00 83 C4 08 50 64 FF 35 00 00 00 00 64 89 25 00 00 00 00 64 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1275_SEA_AXE {
	meta:
		tool = "P"
		name = "SEA-AXE"
		pattern = "FCBC????0E1FE8????26A1????8B1E????2BC38EC0B1??D3E3"
	strings:
		$1 = { FC BC ?? ?? 0E 1F E8 ?? ?? 26 A1 ?? ?? 8B 1E ?? ?? 2B C3 8E C0 B1 ?? D3 E3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1276_SEA_AXE {
	meta:
		tool = "P"
		name = "SEA-AXE"
		version = "2.2"
		pattern = "FCBC????0E1FA3????E8????A1????8B??????2BC38EC0B103D3E38BCBBF????8BF7F3A5"
	strings:
		$1 = { FC BC ?? ?? 0E 1F A3 ?? ?? E8 ?? ?? A1 ?? ?? 8B ?? ?? ?? 2B C3 8E C0 B1 03 D3 E3 8B CB BF ?? ?? 8B F7 F3 A5 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1277_SecuPack {
	meta:
		tool = "P"
		name = "SecuPack"
		version = "1.5"
		pattern = "558BEC83C4F053565733C08945F0B8CC3A40??E8E0FCFFFF33C05568EA3C40??64FF306489206A??6880??????6A036A??6A01??????80"
	strings:
		$1 = { 55 8B EC 83 C4 F0 53 56 57 33 C0 89 45 F0 B8 CC 3A 40 ?? E8 E0 FC FF FF 33 C0 55 68 EA 3C 40 ?? 64 FF 30 64 89 20 6A ?? 68 80 ?? ?? ?? 6A 03 6A ?? 6A 01 ?? ?? ?? 80 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1278_SecureEXE {
	meta:
		tool = "P"
		name = "SecureEXE"
		version = "3.0"
		pattern = "E9B8000000??????00??????00??????000000000000"
	strings:
		$1 = { E9 B8 00 00 00 ?? ?? ?? 00 ?? ?? ?? 00 ?? ?? ?? 00 00 00 00 00 00 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1279_SecurePE {
	meta:
		tool = "P"
		name = "SecurePE"
		version = "1.x"
		pattern = "8B0424E8000000005D81ED4C2F40008985612F40008D9D652F400053C3000000008DB5BA2F40008BFEBB652F4000B9C6010000AD2BC3C1C00333C3AB4381FB8E2F40007505BB652F4000E2E789AD1A31400089AD5534400089AD683440008D85BA2F400050C3"
	strings:
		$1 = { 8B 04 24 E8 00 00 00 00 5D 81 ED 4C 2F 40 00 89 85 61 2F 40 00 8D 9D 65 2F 40 00 53 C3 00 00 00 00 8D B5 BA 2F 40 00 8B FE BB 65 2F 40 00 B9 C6 01 00 00 AD 2B C3 C1 C0 03 33 C3 AB 43 81 FB 8E 2F 40 00 75 05 BB 65 2F 40 00 E2 E7 89 AD 1A 31 40 00 89 AD 55 34 40 00 89 AD 68 34 40 00 8D 85 BA 2F 40 00 50 C3 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1280_Securom {
	meta:
		tool = "P"
		name = "Securom"
		version = "7"
		pattern = "B8????????8B????????0A????????????E8"
	strings:
		$1 = { B8 ?? ?? ?? ?? 8B ?? ?? ?? ?? 0A ?? ?? ?? ?? ?? ?? E8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1281_Securom {
	meta:
		tool = "P"
		name = "Securom"
		version = "7.x"
		pattern = "9C9C83EC??C74424??????????C74424??????????89??24????????????C14C24??18"
	strings:
		$1 = { 9C 9C 83 EC ?? C7 44 24 ?? ?? ?? ?? ?? C7 44 24 ?? ?? ?? ?? ?? 89 ?? 24 ?? ?? ?? ?? ?? ?? C1 4C 24 ?? 18 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1282_SEN_Debug_Protector {
	meta:
		tool = "P"
		name = "SEN Debug Protector???"
		pattern = "BB????????00??????????29????4EE8"
	strings:
		$1 = { BB ?? ?? ?? ?? 00 ?? ?? ?? ?? ?? 29 ?? ?? 4E E8 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1283_Sentinel {
	meta:
		tool = "I"
		name = "Sentinel"
		version = "6.4.0 SuperPro Automatic Protection"
		pattern = "68????????6A016A00FF15????????A3????????FF15????????33C93DB7000000A1????????0F94C185C0890D????????0F85????????5556C705????????01000000FF15????????0105????????FF15????????3305????????25FEFFDF3F0D01002000A3????????33C050C70485????????00000000E8????????83C40483F8647C??68????????FF15????????8B35????????68????????FFD668????????FFD668"
	strings:
		$1 = { 68 ?? ?? ?? ?? 6A 01 6A 00 FF 15 ?? ?? ?? ?? A3 ?? ?? ?? ?? FF 15 ?? ?? ?? ?? 33 C9 3D B7 00 00 00 A1 ?? ?? ?? ?? 0F 94 C1 85 C0 89 0D ?? ?? ?? ?? 0F 85 ?? ?? ?? ?? 55 56 C7 05 ?? ?? ?? ?? 01 00 00 00 FF 15 ?? ?? ?? ?? 01 05 ?? ?? ?? ?? FF 15 ?? ?? ?? ?? 33 05 ?? ?? ?? ?? 25 FE FF DF 3F 0D 01 00 20 00 A3 ?? ?? ?? ?? 33 C0 50 C7 04 85 ?? ?? ?? ?? 00 00 00 00 E8 ?? ?? ?? ?? 83 C4 04 83 F8 64 7C ?? 68 ?? ?? ?? ?? FF 15 ?? ?? ?? ?? 8B 35 ?? ?? ?? ?? 68 ?? ?? ?? ?? FF D6 68 ?? ?? ?? ?? FF D6 68 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1284_Sentinel {
	meta:
		tool = "I"
		name = "Sentinel"
		version = "6.4.1 SuperPro Automatic Protection"
		pattern = "A1????????558B??????85C074??85ED75??A1????????5055FF15????????8B0D????????5551FF15????????85C074??8B15????????52FF15????????6A006A0068????????E8????????B8010000005DC20C0068????????6A016A00FF15????????A3????????FF15????????33C93DB7000000A1????????0F94C185C0890D????????0F85????????56C705????????01000000FF15????????01??????????FF15"
	strings:
		$1 = { A1 ?? ?? ?? ?? 55 8B ?? ?? ?? 85 C0 74 ?? 85 ED 75 ?? A1 ?? ?? ?? ?? 50 55 FF 15 ?? ?? ?? ?? 8B 0D ?? ?? ?? ?? 55 51 FF 15 ?? ?? ?? ?? 85 C0 74 ?? 8B 15 ?? ?? ?? ?? 52 FF 15 ?? ?? ?? ?? 6A 00 6A 00 68 ?? ?? ?? ?? E8 ?? ?? ?? ?? B8 01 00 00 00 5D C2 0C 00 68 ?? ?? ?? ?? 6A 01 6A 00 FF 15 ?? ?? ?? ?? A3 ?? ?? ?? ?? FF 15 ?? ?? ?? ?? 33 C9 3D B7 00 00 00 A1 ?? ?? ?? ?? 0F 94 C1 85 C0 89 0D ?? ?? ?? ?? 0F 85 ?? ?? ?? ?? 56 C7 05 ?? ?? ?? ?? 01 00 00 00 FF 15 ?? ?? ?? ?? 01 ?? ?? ?? ?? ?? FF 15 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1285_Sentinel {
	meta:
		tool = "I"
		name = "Sentinel"
		version = "5.42.0.0 SuperPro Dongle"
		pattern = "60E8000000005D81ED????????B910FF0000BB00000000E8????????68B920FF0000E8????????68B930FF0000E8????????68E8????????6827F0107FE8????????68BB02000000E8????????6807D4307FE8????????68BB01000000E8????????68501EDF80E8????????68B910120000BB00000000E8????????68B920120000E8????????68E8????????68072AA300E8????????68BB01000000E8????????6888B55BFFE8????????68B930120000BB00000000E8????????68"
	strings:
		$1 = { 60 E8 00 00 00 00 5D 81 ED ?? ?? ?? ?? B9 10 FF 00 00 BB 00 00 00 00 E8 ?? ?? ?? ?? 68 B9 20 FF 00 00 E8 ?? ?? ?? ?? 68 B9 30 FF 00 00 E8 ?? ?? ?? ?? 68 E8 ?? ?? ?? ?? 68 27 F0 10 7F E8 ?? ?? ?? ?? 68 BB 02 00 00 00 E8 ?? ?? ?? ?? 68 07 D4 30 7F E8 ?? ?? ?? ?? 68 BB 01 00 00 00 E8 ?? ?? ?? ?? 68 50 1E DF 80 E8 ?? ?? ?? ?? 68 B9 10 12 00 00 BB 00 00 00 00 E8 ?? ?? ?? ?? 68 B9 20 12 00 00 E8 ?? ?? ?? ?? 68 E8 ?? ?? ?? ?? 68 07 2A A3 00 E8 ?? ?? ?? ?? 68 BB 01 00 00 00 E8 ?? ?? ?? ?? 68 88 B5 5B FF E8 ?? ?? ?? ?? 68 B9 30 12 00 00 BB 00 00 00 00 E8 ?? ?? ?? ?? 68 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1286_Sentinel {
	meta:
		tool = "I"
		name = "Sentinel"
		version = "1.1.0 UltraPro Dongle"
		pattern = "A1????????85C00F85590600005556C705????????????????FF15????????0105????????FF15????????3305????????25FE??????0D01??????A3????????33C050C704??????????????????E8BD0F000083C40483F8647CE768????????FF15????????8B35????????68????????FFD668????????FFD668????????FFD668????????FFD668????????FFD6A1????????8B??????????668B4D0083C508??????????????668B75FA????????????66????????????8B55FC81E1FFFF000081F9"
	strings:
		$1 = { A1 ?? ?? ?? ?? 85 C0 0F 85 59 06 00 00 55 56 C7 05 ?? ?? ?? ?? ?? ?? ?? ?? FF 15 ?? ?? ?? ?? 01 05 ?? ?? ?? ?? FF 15 ?? ?? ?? ?? 33 05 ?? ?? ?? ?? 25 FE ?? ?? ?? 0D 01 ?? ?? ?? A3 ?? ?? ?? ?? 33 C0 50 C7 04 ?? ?? ?? ?? ?? ?? ?? ?? ?? E8 BD 0F 00 00 83 C4 04 83 F8 64 7C E7 68 ?? ?? ?? ?? FF 15 ?? ?? ?? ?? 8B 35 ?? ?? ?? ?? 68 ?? ?? ?? ?? FF D6 68 ?? ?? ?? ?? FF D6 68 ?? ?? ?? ?? FF D6 68 ?? ?? ?? ?? FF D6 68 ?? ?? ?? ?? FF D6 A1 ?? ?? ?? ?? 8B ?? ?? ?? ?? ?? 66 8B 4D 00 83 C5 08 ?? ?? ?? ?? ?? ?? ?? 66 8B 75 FA ?? ?? ?? ?? ?? ?? 66 ?? ?? ?? ?? ?? ?? 8B 55 FC 81 E1 FF FF 00 00 81 F9 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1287_Setup_Factory {
	meta:
		tool = "I"
		name = "Setup Factory"
		version = "6.0.0.3 Setup Launcher"
		pattern = "558BEC6AFF689061400068703B400064A100000000506489250000000083EC585356578965E8FF151461400033D28AD489155C8940008BC881E1FF000000890D58894000C1E10803CA890D54894000C1E810A35089400033F656E8E00000005985C075086A1CE8B0000000598975FCE8E60F0000FF1510614000A3408E4000E8A40E0000A390894000E84D0C0000E88F0B0000E822FEFFFF8975D08D45A450FF150C614000E820"
	strings:
		$1 = { 55 8B EC 6A FF 68 90 61 40 00 68 70 3B 40 00 64 A1 00 00 00 00 50 64 89 25 00 00 00 00 83 EC 58 53 56 57 89 65 E8 FF 15 14 61 40 00 33 D2 8A D4 89 15 5C 89 40 00 8B C8 81 E1 FF 00 00 00 89 0D 58 89 40 00 C1 E1 08 03 CA 89 0D 54 89 40 00 C1 E8 10 A3 50 89 40 00 33 F6 56 E8 E0 00 00 00 59 85 C0 75 08 6A 1C E8 B0 00 00 00 59 89 75 FC E8 E6 0F 00 00 FF 15 10 61 40 00 A3 40 8E 40 00 E8 A4 0E 00 00 A3 90 89 40 00 E8 4D 0C 00 00 E8 8F 0B 00 00 E8 22 FE FF FF 89 75 D0 8D 45 A4 50 FF 15 0C 61 40 00 E8 20 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
rule rule_1288_Setup2Go_Installer_Stub {
	meta:
		tool = "I"
		name = "Setup2Go Installer Stub"
		pattern = "5B53455455505F494E464F5D0D0A566572"
	strings:
		$1 = { 5B 53 45 54 55 50 5F 49 4E 46 4F 5D 0D 0A 56 65 72 }
	condition:
		for any of them : ( $ at pe.entry_point )
}
)x86_pe_packer";
