
//fan actions
uint16_t fanOnOffAction[95] = {1224, 488, 1224, 462, 356, 1308, 1250, 462, 1198, 488, 380, 1282, 380, 1304, 382, 1308, 380, 1306, 382, 1306, 380, 1308, 1222, 7218, 1246, 462, 1224, 462, 382, 1280, 1226, 464, 1220, 488, 380, 1282, 380, 1304, 380, 1308, 402, 1280, 410, 1282, 402, 1280, 1252, 7188, 1228, 462, 1222, 488, 382, 1282, 1248, 460, 1226, 460, 356, 1306, 406, 1280, 382, 1302, 386, 1306, 406, 1278, 382, 1308, 1248, 7188, 1224, 488, 1200, 488, 356, 1308, 1248, 462, 1224, 462, 384, 1280, 378, 1306, 404, 1282, 408, 1306, 382, 1306, 378, 1284, 1226};
uint16_t fanSpeedAction[95] = {1262, 420, 1266, 420, 424, 1270, 1260, 420, 1268, 416, 424, 1270, 420, 1270, 416, 1270, 422, 1266, 442, 1244, 1260, 420, 420, 8028, 1258, 422, 1266, 420, 426, 1268, 1260, 418, 1270, 420, 422, 1270, 420, 1268, 416, 1272, 416, 1270, 416, 1270, 1262, 418, 422, 8026, 1256, 424, 1266, 422, 422, 1270, 1258, 424, 1262, 424, 420, 1274, 412, 1274, 418, 1270, 414, 1272, 414, 1272, 1258, 424, 418, 8026, 1260, 418, 1262, 426, 420, 1274, 1260, 420, 1262, 428, 418, 1276, 412, 1272, 418, 1268, 420, 1266, 418, 1270, 1256, 426, 420};
uint16_t fanSilenceAction[335] = {1288, 402, 1290, 396, 444, 1242, 1290, 398, 1284, 402, 448, 1238, 444, 1242, 450, 1236, 444, 1242, 1290, 398, 442, 1244, 448, 7990, 1294, 394, 1288, 400, 440, 1246, 1286, 400, 1292, 396, 444, 1240, 440, 1246, 446, 1240, 442, 1246, 1288, 400, 440, 1246, 446, 7992, 1292, 396, 1286, 402, 448, 1238, 1284, 404, 1288, 398, 442, 1244, 448, 1238, 444, 1242, 450, 1238, 1284, 404, 448, 1240, 442, 7996, 1288, 400, 1292, 396, 444, 1242, 1292, 394, 1286, 402, 448, 1238, 444, 1242, 440, 1246, 446, 1242, 1292, 396, 444, 1242, 450, 7988, 1284, 404, 1288, 400, 440, 1246, 1288, 400, 1292, 396, 444, 1240, 440, 1246, 448, 1240, 440, 1246, 1288, 402, 440, 1246, 446, 7992, 1290, 398, 1284, 404, 448, 1238, 1284, 404, 1288, 400, 440, 1244, 446, 1240, 442, 1244, 448, 1240, 1294, 394, 446, 1240, 440, 7996, 1286, 402, 1290, 398, 442, 1242, 1290, 398, 1284, 404, 446, 1240, 442, 1244, 448, 1238, 444, 1244, 1290, 398, 442, 1244, 448, 7990, 1294, 394, 1288, 402, 440, 1246, 1286, 402, 1290, 398, 442, 1242, 450, 1238, 444, 1242, 450, 1236, 1286, 402, 448, 1238, 444, 7994, 1288, 398, 1294, 394, 446, 1240, 1292, 396, 1286, 402, 440, 1246, 446, 1240, 440, 1246, 446, 1240, 1292, 396, 444, 1242, 438, 7998, 1284, 404, 1288, 400, 440, 1246, 1288, 398, 1294, 394, 446, 1240, 440, 1244, 448, 1240, 440, 1246, 1288, 398, 442, 1246, 446, 7990, 1292, 396, 1316, 372, 468, 1216, 1284, 404, 1320, 368, 440, 1244, 448, 1238, 442, 1244, 448, 1238, 1284, 404, 446, 1240, 442, 7996, 1288, 400, 1312, 376, 476, 1210, 1322, 364, 1318, 370, 468, 1218, 474, 1212, 470, 1216, 444, 1242, 1322, 368, 474, 1212, 470, 7966, 1316, 374, 1320, 368, 470, 1216, 1318, 370, 1312, 376, 476, 1210, 472, 1214, 478, 1210, 472, 1214, 1318, 370, 470, 1216, 476, 7962, 1322, 368, 1314, 374, 466, 1220, 1312, 374, 1318, 370, 470, 1216, 478, 1208, 472, 1214, 478, 1210, 1314, 376, 474, 1212, 470};
uint16_t rotationOnOffAction[383] = {1288, 400, 1292, 396, 444, 1240, 1292, 396, 1286, 402, 440, 1248, 444, 1242, 1292, 396, 444, 1242, 450, 1236, 444, 1242, 450, 7988, 1294, 394, 1288, 400, 440, 1246, 1286, 402, 1290, 396, 444, 1242, 440, 1246, 1286, 402, 448, 1238, 444, 1242, 450, 1238, 444, 7992, 1290, 400, 1292, 396, 444, 1242, 1292, 396, 1286, 402, 438, 1246, 446, 1240, 1292, 396, 444, 1242, 450, 1238, 444, 1242, 450, 7988, 1294, 394, 1288, 400, 440, 1246, 1288, 400, 1292, 396, 444, 1242, 440, 1248, 1286, 402, 438, 1248, 444, 1242, 450, 1236, 444, 7994, 1290, 398, 1292, 396, 444, 1242, 1292, 396, 1286, 400, 440, 1246, 446, 1240, 1292, 396, 444, 1242, 438, 1248, 444, 1242, 450, 7988, 1294, 394, 1288, 400, 440, 1246, 1288, 400, 1292, 396, 444, 1242, 440, 1246, 1286, 402, 438, 1248, 444, 1242, 440, 1248, 446, 7990, 1290, 398, 1294, 394, 446, 1240, 1292, 394, 1286, 400, 440, 1246, 446, 1240, 1294, 396, 444, 1240, 440, 1246, 446, 1240, 440, 7998, 1284, 404, 1288, 398, 442, 1244, 1290, 398, 1292, 394, 446, 1240, 440, 1246, 1288, 400, 440, 1246, 446, 1240, 442, 1246, 446, 7992, 1290, 398, 1284, 404, 446, 1240, 1284, 404, 1286, 400, 442, 1246, 446, 1240, 1294, 394, 446, 1240, 440, 1246, 446, 1240, 442, 7996, 1286, 402, 1290, 398, 442, 1244, 1290, 398, 1282, 404, 446, 1240, 442, 1244, 1288, 400, 440, 1246, 446, 1240, 442, 1244, 448, 7990, 1292, 396, 1286, 402, 448, 1238, 1284, 404, 1288, 398, 442, 1244, 448, 1238, 1286, 402, 448, 1240, 442, 1244, 448, 1238, 444, 7994, 1288, 400, 1292, 396, 444, 1242, 1292, 396, 1316, 370, 448, 1238, 444, 1242, 1290, 398, 442, 1244, 448, 1238, 444, 1242, 450, 7988, 1294, 394, 1320, 368, 472, 1214, 1318, 368, 1312, 374, 476, 1210, 440, 1246, 1318, 370, 470, 1216, 476, 1210, 472, 1214, 478, 7962, 1320, 368, 1316, 372, 466, 1220, 1314, 374, 1308, 378, 472, 1214, 478, 1208, 1314, 374, 476, 1210, 472, 1214, 478, 1208, 472, 7966, 1318, 372, 1310, 402, 448, 1212, 1312, 378, 1314, 372, 468, 1218, 474, 1212, 1322, 368, 472, 1212, 470, 1216, 476, 1212, 470, 7968, 1314, 376, 1316, 370, 470, 1214, 1318, 370, 1310, 376, 474, 1210, 470, 1216, 1318, 370, 470, 1216, 476, 1210, 470, 1216, 476};
uint16_t ionOnOffAction[95] = {1292, 362, 1324, 362, 482, 1236, 1292, 362, 1326, 360, 482, 1238, 1292, 364, 480, 1240, 448, 1238, 448, 1238, 448, 1238, 448, 7990, 1292, 364, 1324, 364, 480, 1238, 1292, 362, 1326, 362, 482, 1236, 1292, 364, 480, 1238, 450, 1238, 450, 1238, 448, 1240, 448, 7990, 1290, 366, 1322, 364, 480, 1238, 1290, 364, 1324, 364, 482, 1238, 1290, 364, 480, 1238, 450, 1238, 448, 1240, 448, 1238, 448, 7990, 1292, 364, 1324, 362, 482, 1238, 1290, 364, 1324, 364, 480, 1238, 1292, 364, 480, 1238, 448, 1238, 450, 1238, 450, 1238, 448};
//tv actions
uint16_t tvOnOffAction[407] = {8904, 4552, 568, 558, 578, 548, 574, 552, 572, 552, 572, 554, 570, 556, 568, 582, 542, 1676, 574, 1670, 570, 1674, 576, 552, 574, 552, 574, 554, 570, 1672, 578, 1666, 574, 554, 570, 1672, 578, 1666, 572, 1672, 566, 1676, 574, 554, 570, 554, 570, 556, 570, 556, 568, 558, 576, 550, 576, 550, 574, 552, 572, 1672, 568, 1676, 574, 1670, 568, 1674, 576, 42390, 8902, 4556, 576, 550, 574, 552, 572, 554, 570, 554, 570, 556, 568, 558, 576, 548, 576, 1668, 570, 1672, 576, 1666, 572, 554, 570, 556, 568, 558, 568, 1676, 574, 1670, 570, 558, 566, 1676, 574, 1670, 568, 1676, 574, 1668, 570, 556, 568, 558, 576, 548, 576, 550, 574, 552, 572, 554, 570, 556, 570, 556, 568, 1676, 574, 1670, 570, 1674, 576, 1668, 572, 42394, 8908, 4550, 570, 554, 570, 556, 568, 558, 566, 558, 576, 550, 574, 552, 572, 552, 572, 1672, 566, 1676, 572, 1670, 568, 558, 566, 558, 576, 550, 574, 1668, 570, 1674, 576, 550, 574, 1670, 570, 1674, 576, 1668, 570, 1672, 578, 550, 574, 552, 572, 552, 572, 554, 570, 556, 568, 556, 568, 558, 566, 560, 574, 1668, 570, 1672, 566, 1678, 572, 1672, 568, 42398, 8906, 4552, 568, 558, 576, 550, 574, 552, 574, 552, 574, 552, 570, 556, 570, 556, 568, 1674, 576, 1668, 570, 1674, 576, 550, 574, 552, 572, 554, 570, 1672, 566, 1676, 574, 554, 572, 1672, 576, 1666, 572, 1672, 568, 1676, 574, 552, 572, 554, 572, 554, 568, 558, 568, 558, 576, 550, 574, 552, 572, 552, 572, 1672, 568, 1676, 574, 1670, 570, 1674, 574, 42392, 8932, 4524, 576, 550, 572, 554, 572, 554, 570, 556, 570, 556, 566, 558, 598, 528, 596, 1648, 602, 1642, 576, 1668, 604, 522, 602, 524, 600, 526, 598, 1644, 604, 1638, 600, 526, 598, 1644, 604, 1640, 600, 1644, 606, 1638, 600, 526, 598, 526, 598, 528, 596, 530, 604, 520, 604, 522, 602, 524, 600, 524, 600, 1644, 606, 1638, 602, 1642, 596, 1648, 602, 42360, 8932, 4524, 596, 530, 604, 522, 602, 524, 602, 524, 600, 526, 598, 528, 596, 528, 596, 1646, 602, 1640, 598, 1646, 604, 522, 602, 524, 600, 526, 598, 1646, 604, 1638, 600, 526, 598, 1644, 604, 1640, 600, 1644, 606, 1638, 602, 526, 600, 526, 596, 528, 596, 530, 604, 522, 602, 522, 602, 524, 600, 524, 600, 1644, 596, 1648, 602, 1642, 596, 1648, 602};
//Volume up
uint16_t volumeUp[543] = {8906, 4552, 568, 556, 568, 558, 576, 550, 576, 550, 572, 554, 572, 554, 570, 556, 568, 1674, 574, 1668, 570, 1674, 576, 550, 574, 552, 572, 580, 544, 1674, 576, 1668, 572, 554, 570, 1672, 576, 1668, 570, 556, 568, 558, 566, 1676, 572, 554, 570, 1674, 576, 550, 574, 552, 574, 552, 572, 1672, 566, 1676, 574, 552, 572, 1672, 578, 548, 576, 1668, 570, 42396, 8902, 4556, 574, 552, 574, 552, 572, 554, 570, 556, 568, 558, 566, 558, 576, 550, 574, 1670, 568, 1674, 576, 1670, 570, 556, 568, 558, 566, 558, 576, 1668, 570, 1672, 576, 550, 576, 1668, 570, 1674, 576, 550, 574, 552, 572, 1670, 568, 558, 576, 1666, 572, 554, 570, 556, 568, 558, 566, 1676, 574, 1670, 568, 558, 566, 1678, 572, 554, 570, 1674, 576, 42390, 8898, 4558, 572, 556, 568, 556, 568, 556, 578, 548, 576, 552, 574, 552, 572, 554, 570, 1672, 576, 1668, 572, 1670, 568, 560, 574, 550, 574, 552, 572, 1672, 566, 1676, 574, 554, 570, 1672, 566, 1676, 572, 554, 572, 554, 568, 1676, 574, 552, 572, 1672, 568, 558, 566, 560, 576, 550, 574, 1670, 570, 1674, 576, 550, 574, 1670, 568, 558, 566, 1678, 572, 42394, 8902, 4554, 576, 550, 574, 552, 574, 552, 572, 554, 570, 556, 568, 558, 566, 558, 576, 1668, 570, 1672, 568, 1676, 572, 554, 570, 554, 568, 558, 568, 1676, 574, 1670, 568, 558, 568, 1676, 572, 1672, 566, 558, 576, 550, 574, 1670, 570, 556, 568, 1676, 574, 552, 574, 552, 570, 556, 568, 1674, 576, 1668, 570, 556, 568, 1676, 574, 552, 572, 1670, 568, 42398, 8930, 4526, 572, 554, 572, 554, 568, 558, 600, 526, 596, 528, 596, 530, 604, 522, 602, 1640, 598, 1644, 604, 1638, 600, 526, 598, 528, 596, 530, 604, 1638, 600, 1644, 606, 520, 604, 1640, 600, 1644, 604, 522, 602, 522, 602, 1642, 596, 528, 606, 1638, 600, 524, 600, 526, 598, 528, 596, 1648, 602, 1642, 596, 528, 596, 1650, 600, 526, 600, 1644, 606, 42360, 8926, 4530, 568, 558, 598, 528, 596, 530, 604, 522, 604, 522, 602, 524, 600, 526, 598, 1644, 604, 1638, 602, 1642, 606, 520, 604, 522, 604, 522, 600, 1644, 596, 1646, 602, 524, 600, 1644, 596, 1648, 600, 526, 598, 528, 598, 1646, 604, 522, 602, 1642, 598, 528, 594, 532, 604, 522, 604, 1640, 598, 1646, 604, 522, 602, 1642, 598, 528, 596, 1648, 600, 42364, 8932, 4524, 574, 552, 604, 522, 604, 522, 600, 526, 598, 528, 598, 528, 596, 530, 606, 1638, 600, 1642, 596, 1648, 602, 524, 598, 526, 598, 530, 596, 1648, 602, 1642, 596, 530, 594, 1648, 602, 1642, 596, 530, 604, 520, 604, 1640, 600, 526, 596, 1646, 602, 524, 600, 524, 600, 528, 596, 1646, 602, 1640, 598, 528, 596, 1648, 602, 524, 600, 1644, 594, 42366, 8930, 4528, 604, 522, 600, 524, 600, 526, 598, 528, 596, 530, 594, 532, 602, 522, 602, 1642, 598, 1646, 602, 1640, 630, 496, 628, 498, 626, 500, 624, 1618, 630, 1612, 626, 500, 624, 1620, 598, 1646, 604, 522, 602, 524, 600, 1642, 596, 532, 604, 1638, 600, 526, 598, 528, 596, 530, 594, 1648, 600, 1642, 598, 530, 604, 1640, 600, 526, 598, 1646, 604};
//Volume down
uint16_t volumeDown[407] = {8902, 4556, 574, 552, 572, 554, 570, 554, 568, 558, 566, 558, 576, 550, 574, 552, 574, 1694, 544, 1672, 576, 1668, 624, 504, 568, 558, 576, 548, 576, 1692, 546, 1672, 578, 550, 574, 552, 572, 554, 570, 1670, 568, 560, 576, 1666, 572, 554, 570, 1674, 576, 550, 574, 1670, 570, 1674, 576, 552, 572, 1670, 570, 558, 576, 1666, 574, 554, 570, 1672, 578, 42388, 8900, 4558, 572, 554, 572, 554, 570, 556, 568, 558, 576, 550, 574, 552, 572, 552, 572, 1670, 570, 1674, 574, 1670, 568, 558, 576, 548, 576, 550, 574, 1694, 544, 1672, 576, 552, 572, 554, 570, 554, 570, 1672, 576, 550, 574, 1668, 570, 556, 568, 1674, 574, 552, 572, 1670, 568, 1676, 574, 554, 570, 1672, 578, 550, 574, 1668, 570, 556, 568, 1674, 574, 42392, 8906, 4550, 570, 556, 568, 560, 576, 550, 574, 552, 572, 552, 572, 554, 570, 556, 568, 1672, 576, 1668, 572, 1672, 578, 550, 576, 550, 572, 554, 572, 1670, 578, 1664, 574, 554, 570, 556, 568, 558, 566, 1676, 574, 552, 572, 1672, 566, 560, 576, 1666, 572, 554, 570, 1674, 576, 1666, 572, 556, 568, 1674, 576, 552, 572, 1670, 568, 558, 576, 1666, 572, 42394, 8904, 4552, 568, 558, 576, 550, 574, 552, 572, 554, 572, 554, 570, 556, 568, 558, 568, 1674, 574, 1670, 570, 1674, 576, 552, 572, 554, 570, 556, 568, 1674, 576, 1668, 572, 556, 568, 558, 576, 550, 574, 1668, 572, 556, 568, 1674, 576, 552, 572, 1670, 568, 558, 578, 1664, 574, 1670, 570, 558, 576, 1666, 574, 554, 570, 1672, 576, 550, 574, 1668, 570, 42396, 8902, 4554, 576, 552, 572, 554, 570, 556, 568, 556, 568, 558, 576, 548, 576, 550, 574, 1668, 570, 1674, 576, 1668, 570, 558, 566, 558, 576, 550, 574, 1668, 570, 1674, 576, 550, 574, 552, 572, 554, 570, 1672, 578, 548, 574, 1668, 572, 556, 568, 1674, 576, 552, 572, 1670, 570, 1674, 574, 552, 572, 1670, 578, 548, 576, 1666, 572, 554, 570, 1674, 576, 42386, 8900, 4556, 574, 552, 572, 554, 570, 556, 568, 556, 568, 558, 576, 550, 576, 550, 574, 1668, 570, 1674, 576, 1668, 570, 556, 568, 558, 566, 560, 576, 1666, 572, 1672, 578, 548, 576, 552, 572, 552, 572, 1670, 568, 560, 576, 1666, 572, 554, 570, 1674, 576, 550, 574, 1670, 570, 1674, 576, 552, 572, 1670, 568, 558, 576, 1666, 572, 554, 602, 1640, 598};
//Channel up
uint16_t channelUp[475] = {8898, 4558, 572, 556, 570, 556, 568, 558, 568, 558, 574, 552, 572, 552, 572, 554, 572, 1670, 566, 1702, 548, 1670, 568, 558, 576, 550, 574, 578, 548, 1668, 570, 1700, 548, 552, 574, 554, 570, 554, 570, 556, 568, 558, 566, 560, 576, 550, 574, 552, 572, 1670, 570, 1700, 548, 1668, 570, 1674, 576, 1668, 570, 1674, 576, 1668, 570, 1672, 578, 550, 574, 42390, 8898, 4558, 572, 554, 570, 556, 568, 558, 576, 550, 574, 552, 574, 552, 572, 554, 572, 1670, 578, 1664, 574, 1696, 542, 558, 576, 550, 574, 552, 572, 1670, 568, 1700, 550, 552, 572, 554, 570, 556, 568, 558, 566, 558, 566, 560, 574, 550, 574, 552, 572, 1670, 568, 1674, 574, 1670, 570, 1674, 576, 1670, 570, 1674, 576, 1668, 572, 1672, 576, 550, 574, 42390, 8908, 4550, 570, 556, 568, 558, 576, 548, 576, 550, 574, 552, 572, 554, 570, 556, 568, 1674, 576, 1666, 572, 1672, 578, 548, 576, 550, 574, 552, 572, 1670, 568, 1676, 574, 552, 572, 556, 568, 558, 566, 558, 566, 560, 574, 550, 574, 552, 572, 554, 570, 1672, 568, 1676, 572, 1670, 568, 1676, 574, 1670, 568, 1674, 574, 1670, 570, 1674, 576, 552, 574, 42392, 8906, 4550, 570, 556, 568, 558, 576, 550, 574, 552, 572, 552, 572, 554, 570, 556, 568, 1674, 574, 1668, 570, 1672, 576, 550, 574, 552, 572, 554, 570, 1672, 578, 1666, 574, 554, 572, 554, 568, 558, 566, 560, 576, 550, 574, 552, 572, 552, 572, 554, 570, 1672, 576, 1666, 572, 1672, 566, 1676, 574, 1670, 568, 1676, 574, 1670, 570, 1674, 574, 552, 572, 42394, 8926, 4530, 568, 558, 578, 550, 574, 552, 574, 552, 572, 554, 570, 554, 570, 556, 568, 1674, 574, 1668, 570, 1674, 576, 552, 604, 522, 602, 522, 602, 1642, 598, 1646, 604, 524, 600, 526, 600, 526, 598, 530, 594, 530, 604, 522, 604, 522, 602, 524, 600, 1642, 596, 1648, 602, 1640, 598, 1646, 604, 1640, 600, 1644, 606, 1638, 600, 1644, 604, 522, 602, 42362, 8926, 4532, 598, 528, 596, 530, 594, 532, 604, 522, 602, 524, 600, 526, 600, 526, 598, 1644, 604, 1640, 600, 1644, 606, 520, 604, 522, 602, 524, 600, 1644, 596, 1648, 602, 526, 600, 526, 598, 528, 596, 530, 594, 530, 604, 522, 602, 524, 600, 524, 600, 1642, 606, 1638, 602, 1642, 596, 1648, 602, 1642, 598, 1646, 602, 1642, 598, 1646, 604, 522, 602, 42360, 8928, 4530, 600, 526, 598, 528, 596, 530, 594, 532, 594, 532, 602, 524, 600, 526, 598, 1642, 596, 1648, 602, 1642, 598, 530, 594, 532, 602, 522, 602, 1640, 598, 1646, 604, 522, 602, 526, 600, 526, 598, 528, 596, 530, 594, 532, 604, 522, 602, 524, 602, 1640, 598, 1646, 604, 1640, 598, 1644, 604, 1640, 600, 1644, 604, 1638, 600, 1644, 606, 522, 602};
//Channel down
uint16_t channelDown[611] = {8906, 4552, 568, 558, 576, 550, 574, 552, 572, 554, 570, 554, 570, 556, 568, 558, 566, 1676, 574, 1696, 542, 1700, 548, 552, 572, 554, 570, 556, 568, 1674, 574, 1696, 544, 556, 568, 1676, 574, 552, 572, 554, 570, 556, 568, 558, 576, 550, 574, 552, 572, 1668, 570, 558, 566, 1676, 574, 1696, 542, 1674, 574, 1670, 568, 1674, 576, 1668, 570, 558, 566, 42398, 8908, 4550, 570, 556, 568, 558, 576, 550, 574, 552, 572, 552, 572, 554, 570, 556, 568, 1674, 576, 1668, 570, 1674, 576, 550, 574, 552, 572, 554, 570, 1672, 576, 1666, 572, 556, 568, 1700, 550, 550, 574, 554, 570, 554, 570, 556, 568, 558, 566, 560, 574, 1668, 572, 554, 570, 1700, 550, 1668, 572, 1674, 576, 1666, 572, 1672, 576, 1668, 572, 554, 568, 42396, 8900, 4556, 574, 552, 572, 554, 570, 558, 566, 558, 566, 560, 576, 550, 574, 552, 572, 1670, 570, 1700, 550, 1668, 570, 558, 566, 560, 574, 550, 574, 1668, 570, 1674, 576, 552, 572, 1670, 570, 558, 566, 560, 574, 550, 574, 552, 572, 554, 570, 554, 570, 1674, 576, 550, 574, 1668, 570, 1674, 576, 1668, 570, 1674, 576, 1668, 570, 1672, 576, 550, 574, 42392, 8904, 4552, 568, 558, 576, 550, 574, 552, 572, 554, 572, 554, 568, 556, 568, 558, 576, 1666, 574, 1670, 570, 1674, 574, 552, 572, 556, 570, 556, 568, 1674, 574, 1670, 568, 558, 568, 1674, 574, 552, 572, 554, 570, 556, 568, 558, 568, 558, 576, 550, 574, 1668, 570, 556, 568, 1674, 574, 1668, 570, 1674, 574, 1670, 570, 1674, 576, 1668, 570, 556, 568, 42396, 8932, 4526, 574, 552, 572, 554, 570, 556, 568, 560, 576, 548, 576, 550, 574, 552, 572, 1670, 568, 1676, 574, 1670, 568, 558, 566, 558, 576, 550, 606, 1638, 570, 1674, 576, 550, 604, 1638, 600, 526, 598, 528, 596, 530, 606, 522, 602, 522, 602, 524, 600, 1642, 598, 530, 606, 1636, 602, 1642, 596, 1648, 602, 1642, 598, 1646, 602, 1640, 598, 530, 594, 42370, 8928, 4528, 602, 526, 598, 528, 596, 530, 596, 530, 594, 532, 602, 524, 602, 524, 600, 1642, 596, 1648, 602, 1642, 598, 530, 606, 520, 604, 522, 602, 1640, 598, 1646, 604, 522, 602, 1640, 598, 530, 596, 530, 604, 522, 602, 524, 602, 524, 600, 526, 598, 1644, 606, 522, 602, 1640, 598, 1646, 604, 1640, 600, 1644, 606, 1638, 600, 1644, 606, 520, 604, 42362, 8928, 4530, 600, 526, 598, 528, 596, 530, 594, 532, 602, 522, 602, 524, 600, 526, 598, 1644, 596, 1648, 602, 1642, 596, 530, 604, 522, 602, 524, 600, 1642, 598, 1646, 602, 524, 600, 1642, 596, 530, 606, 522, 602, 524, 602, 524, 600, 526, 598, 528, 596, 1646, 604, 522, 600, 1642, 598, 1646, 602, 1640, 598, 1648, 602, 1642, 598, 1646, 604, 524, 600, 42364, 8932, 4524, 606, 520, 604, 522, 602, 524, 600, 526, 598, 528, 596, 530, 596, 530, 594, 1648, 602, 1642, 596, 1648, 602, 526, 600, 526, 598, 528, 596, 1646, 602, 1640, 598, 530, 594, 1648, 602, 526, 600, 528, 596, 528, 596, 530, 594, 532, 604, 522, 602, 1640, 598, 528, 596, 1648, 602, 1642, 596, 1646, 602, 1642, 596, 1646, 604, 1640, 598, 528, 594, 42366, 8930, 4526, 606, 520, 604, 524, 600, 524, 600, 526, 598, 528, 596, 530, 594, 530, 594, 1650, 600, 1642, 596, 1648, 600, 526, 598, 528, 598, 528, 626, 1616, 624, 1620, 628, 498, 626, 1616, 622, 504, 630, 496, 630, 496, 596, 530, 594, 532, 602, 522, 602, 1642, 598, 528, 596, 1648, 602, 1642, 598, 1646, 604, 1640, 598, 1646, 602, 1640, 598, 528, 596};

String fanAction(int action) {
    irsend.begin();
    String completedAction;
    switch (action) {
        case 1:  //Turn On/Off
                 // Send a raw data capture at 38kHz.
            irsend.sendRaw(fanOnOffAction, 67, 38);
            if (fanStatus) {
                fanStatus = false;
                completedAction = "fanoff";
            } else {
                fanStatus = true;
                completedAction = "fanon";
            }
            break;
        case 2:  //Increase Speed
            irsend.sendRaw(fanSpeedAction, 67, 38);
            fanSpeed++;
            if (fanSpeed == 3) {
                fanSpeed = 0;
            }
            completedAction = "fanspeed";
            break;
        case 3:  //Silent Mode
            irsend.sendRaw(fanSilenceAction, 67, 38);
            fanMode++;
            if (fanMode == 3) {
                fanMode = 0;
            }
            completedAction = "fanmode";
            break;
        case 4:  //Rotation On/Off
            irsend.sendRaw(rotationOnOffAction, 67, 38);
            if (rotation) {
                rotation = false;
                completedAction = "rotationoff";
            } else {
                rotation = true;
                completedAction = "rotationon";
            }
            break;
        case 5:  //ionazation
            irsend.sendRaw(ionOnOffAction, 67, 38);
            if (ion) {
                ion = false;
                completedAction = "ionnoff";
            } else {
                ion = true;
                completedAction = "ionon";
            }
            break;
        case 6:
            irsend.sendRaw(tvOnOffAction, 67, 38);
            if (ion) {
                tvStatus = false;
                completedAction = "tvon";
            } else {
                tvStatus = true;
                completedAction = "tvoff";
            }
            break;
        case 7:
            irsend.sendRaw(volumeUp, 67, 38);
            if (ion) {
                completedAction = "volumeUp";
            }
            break;
        case 8:
            irsend.sendRaw(volumeDown, 67, 38);
            if (ion) {
                completedAction = "volumeDown";
            }
            break;
        case 9:
            irsend.sendRaw(channelUp, 67, 38);
            if (ion) {
                completedAction = "channelUp";
            }
            break;
        case 10:
            irsend.sendRaw(channelDown, 67, 38);
            if (ion) {
                completedAction = "channelDown";
            }
            break;
    }
    return completedAction;
}