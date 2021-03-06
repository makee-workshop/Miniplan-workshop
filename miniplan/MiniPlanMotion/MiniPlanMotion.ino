// 待機姿勢
int Servo_Prg_0_Step = 1;
int Servo_Prg_0 [][ALLMATRIX] PROGMEM = {
  //    0    ,    1    ,    2    ,    3    ,    4    ,    5    ,    6    ,    7    ,    8    ,    9    ,    10   ,    11   ,    12   ,    13   ,    14   ,    15   ,   G12   ,  G14   ,  ms
  {    65,      35,      80,      60,      80,     100,     95,      80,      40,      25,       20,       30,       55,       35,       75,       50,        90,       90,      500   }     // 立正
};


// 鞠躬動作
int Servo_Prg_1_Step = 4;
int Servo_Prg_1 [][ALLMATRIX] PROGMEM = {
  //    0    ,    1    ,    2    ,    3    ,    4    ,    5    ,    6    ,    7    ,    8    ,    9    ,    10   ,    11   ,    12   ,    13   ,    14   ,    15   ,   G12   ,  G14   ,  ms
  {    65,      35,      80,      60,      80,     120,     80,      40,     110,     25,      100,      30,       55,       35,       75,       50,        90,       90,      500   },     // 立正 右手前平舉內彎 左手後擺
  {    65,      20,      80,      10,      80,     120,     80,      40,     110,     25,      100,      30,      102,      35,       90,       50,        90,       90,      500   },     // 立正 右手前平舉內彎 左手後擺 鞠躬
  {    65,      20,      80,      10,      80,     120,     80,      40,     110,     25,      100,      30,      102,      35,       90,       50,        90,       90,      1000 },     //  鞠躬動作 等待
  {    65,      35,      80,      60,      80,     100,     95,      80,      40,      25,       20,       30,       55,       35,       75,       50,        90,       90,      800   }      // 立正
};


// 揮手動作
int Servo_Prg_2_Step = 9;
int Servo_Prg_2 [][ALLMATRIX] PROGMEM = {
  //    0    ,    1    ,    2    ,    3    ,    4    ,    5    ,    6    ,    7    ,    8    ,    9    ,    10   ,    11   ,    12   ,    13   ,    14   ,    15   ,   G12   ,  G14   ,  ms
  {    65,      35,      80,      60,      80,     100,     95,      80,      20,      70,      120,      30,       55,       35,       75,       50,        50,       90,      500   },     // 立正 右手上抬向外 頭右轉
  {    65,      35,      80,      60,      80,     100,     95,      80,      40,      30,      120,      30,       55,       35,       75,       50,        50,       90,      300   },     // 立正 右手上抬向內 頭右轉
  {    65,      35,      80,      60,      80,     100,     95,      80,      20,      70,      120,      30,       55,       35,       75,       50,        50,       90,      300   },     // 立正 右手上抬向外 頭右轉
  {    65,      35,      80,      60,      80,     100,     95,      80,      40,      30,      120,      30,       55,       35,       75,       50,        50,       90,      300   },     // 立正 右手上抬向內 頭右轉
  {    65,      35,      80,      60,      80,       0,       50,     100,     40,      30,       25,       30,       55,       35,       75,       50,       130,      90,      500   },     // 立正 左手上抬向外 頭左轉
  {    65,      35,      80,      60,      80,       0,       80,      80,      40,      30,       25,       30,       55,       35,       75,       50,       130,      90,      300   },     // 立正 左手上抬向內 頭左轉
  {    65,      35,      80,      60,      80,       0,       50,     100,     40,      30,       25,       30,       55,       35,       75,       50,       130,      90,      300   },     // 立正 左手上抬向外 頭左轉
  {    65,      35,      80,      60,      80,       0,       80,      80,      40,      30,       25,       30,       55,       35,       75,       50,       130,      90,      300   },     // 立正 左手上抬向內 頭左轉
  {    65,      35,      80,      60,      80,     100,     95,      80,      40,      25,       20,       30,       55,       35,       75,       50,        90,       90,      500   }      // 立正
};


// 鋼鐵人動作
int Servo_Prg_3_Step = 8;
int Servo_Prg_3 [][ALLMATRIX] PROGMEM = {
  //    0    ,    1    ,    2    ,    3    ,    4    ,    5    ,    6    ,    7    ,    8    ,    9    ,    10   ,    11   ,    12   ,    13   ,    14   ,    15   ,   G12   ,  G14   ,  ms
  {    75,      35,      80,      60,      90,     120,     70,     120,      0,      100,      20,       40,       55,       35,       75,       60,        50,       90,      300   },     // 身體左傾斜 右手上抬 掌向外 頭右轉
  {    75,      35,      80,      60,      90,     120,     70,     120,      0,      100,      20,       40,       55,       35,       75,       60,        50,       90,      800   },     // 身體左傾斜 右手上抬 掌向外 頭右轉
  {    55,      35,      80,      60,      70,     100,     20,     120,      0,       50,        0,        20,       55,       35,       75,       40,       130,      90,      300   },     // 身體右傾斜 左手上抬 掌向外 頭左轉
  {    55,      35,      80,      60,      70,     100,     20,     120,      0,       50,        0,        20,       55,       35,       75,       40,       130,      90,      800   },     // 身體右傾斜 左手上抬 掌向外 頭左轉
  {    65,      35,      80,      60,      80,      20,      70,     120,      0,       50,      100,      30,       55,       35,       75,       50,        90,       90,      500   },     // 立正 雙手上抬 掌向外
  {    65,      20,      80,      45,      80,      20,     105,    120,      0,       10,      100,      30,       70,       35,       89,       50,        90,       90,      500   },     // 身體後傾斜 雙手上抬 掌向內
  {    65,      20,      80,      45,      80,      20,     105,    120,      0,       10,      100,      30,       70,       35,       89,       50,        90,       90,      800   },     // 身體後傾斜 雙手上抬 掌向內 
  {    65,      35,      80,      60,      80,     100,     95,      80,      40,      25,       20,       30,       55,       35,       75,       50,        90,       90,      500   }      // 立正
};


// 阿帕契動作
int Servo_Prg_4_Step = 7;
int Servo_Prg_4 [][ALLMATRIX] PROGMEM = {
  //    0    ,    1    ,    2    ,    3    ,    4    ,    5    ,    6    ,    7    ,    8    ,    9    ,    10   ,    11   ,    12   ,    13   ,    14   ,    15   ,   G12   ,  G14   ,  ms
  {    55,      35,      80,      60,      70,     100,     70,      30,      40,      80,       20,       20,       55,       35,       75,       40,        90,       90,      500   },    // 身體右傾斜
  {    55,      35,      80,      60,      70,     100,     70,      30,      40,      80,       20,       20,       55,       35,       75,       35,       130,      90,      300   },    // 身體右傾斜 左腳預抬 頭左轉
  {    55,      35,      80,      60,      70,     100,     70,      30,     100,     10,      100,      40,       55,       35,       75,       30,       130,      90,      500   },    // 身體右傾斜 右手敬禮 左腳上抬 頭左轉
  {    55,      35,      80,      60,      70,     100,     70,      30,     100,     10,      100,      40,       55,       35,       75,       30,       130,      90,      800   },    // 身體右傾斜 右手敬禮 左腳上抬 頭左轉
  {    55,      35,      80,      60,      70,     100,     70,      30,      40,      80,       20,       20,       55,       35,       75,       35,       130,      90,      600   },    // 身體右傾斜 左腳預抬 頭左轉
  {    55,      35,      80,      60,      70,     100,     70,      30,      40,      80,       20,       20,       55,       35,       75,       40,        90,       90,      500   },    // 身體右傾斜
  {    65,      35,      80,      60,      80,     100,     95,      80,      40,      25,       20,       30,       55,       35,       75,       50,        90,       90,      500   }      // 立正
};


// 單腳平衡動作
int Servo_Prg_5_Step = 12;
int Servo_Prg_5 [][ALLMATRIX] PROGMEM = {
  //    0    ,    1    ,    2    ,    3    ,    4    ,    5    ,    6    ,    7    ,    8    ,    9    ,    10   ,    11   ,    12   ,    13   ,    14   ,    15   ,   G12   ,  G14   ,  ms
  {    75,      35,      80,      60,      90,     100,     20,      80,      40,     100,      20,       40,       55,       35,       75,       60,        90,       90,      500   },     // 身體左傾斜 雙手平舉上抬
  {    75,      35,      80,      60,      90,      50,      20,      80,      40,     100,      70,       40,       55,       35,       80,       60,        90,       90,      300   },     // 身體左傾斜 雙手平舉上抬旋轉 右腳預抬
  {    80,      35,      80,      60,      70,      50,      20,      80,      40,     100,      70,       40,       55,       35,       80,       60,        90,       90,      500   },     // 身體左傾斜 雙手平舉上抬旋轉 右腳上抬
  {    80,      35,      80,      60,      70,      50,      20,      80,      40,     100,      70,       40,       55,       35,       80,       60,        90,       90,      600   },     // 身體左傾斜 雙手平舉上抬旋轉 右腳上抬
  {    80,      15,      80,       0,       70,      50,      20,      80,      40,     100,      70,       40,       55,       35,       80,       60,        90,       90,      900   },     // 身體前傾斜 雙手平舉上抬旋轉 右腳上抬
  {    80,      15,      80,       0,       70,      50,       0,       80,      40,     120,      70,       40,       55,       35,       80,       60,        50,       90,      500   },     // 身體前傾斜 雙手平舉上抬旋轉 右腳上抬 上
  {    80,      15,      80,       0,       70,      50,      40,      80,      40,      80,       70,       40,       55,       35,       80,       60,       130,      90,      500   },     // 身體前傾斜 雙手平舉上抬旋轉 右腳上抬 下
  {    80,      15,      80,       0,       70,      50,       0,       80,      40,     120,      70,       40,       55,       35,       80,       60,        50,       90,      500   },     // 身體前傾斜 雙手平舉上抬旋轉 右腳上抬 上
  {    80,      15,      80,       0,       70,      50,      40,      80,      40,      80,       70,       40,       55,       35,       80,       60,       130,      90,      500   },     // 身體前傾斜 雙手平舉上抬旋轉 右腳上抬 下
  {    80,      15,      80,       0,       70,      50,      20,      80,      40,     100,      70,       40,       55,       35,       80,       60,        90,       90,      500   },     // 身體前傾斜 雙手平舉上抬旋轉 右腳上抬
  {    80,      35,      80,      60,      70,      50,      20,      80,      40,     100,      70,       40,       55,       35,       80,       60,        90,       90,      800   },     // 身體左傾斜 雙手平舉上抬旋轉 右腳上抬
  {    65,      35,      80,      60,      80,     100,     95,      80,      40,      25,       20,       30,       55,       35,       75,       50,        90,       90,      500   }      // 立正
};


// 暖身動作
int Servo_Prg_6_Step = 16;
int Servo_Prg_6 [][ALLMATRIX] PROGMEM = {
  //    0    ,    1    ,    2    ,    3    ,    4    ,    5    ,    6    ,    7    ,    8    ,    9    ,    10   ,    11   ,    12   ,    13   ,    14   ,    15   ,   G12   ,  G14   ,  ms
  {    65,      35,      80,      60,      80,     100,     70,      20,     100,     50,       20,       30,       55,       35,       75,       50,        90,       90,      800   },     // 雙手插腰
  {    65,      35,      80,      60,      80,     100,     70,      20,     100,     50,       20,       30,       55,       35,       75,       50,        50,       90,      500   },     // 雙手插腰 頭右轉
  {    65,      35,      80,      60,      80,     100,     70,      20,     100,     50,       20,       30,       55,       35,       75,       50,        50,       90,      500   },     // 雙手插腰 頭右轉
  {    65,      35,      80,      60,      80,     100,     70,      20,     100,     50,       20,       30,       55,       35,       75,       50,       130,      90,      500   },     // 雙手插腰 頭左轉
  {    65,      35,      80,      60,      80,     100,     70,      20,     100,     50,       20,       30,       55,       35,       75,       50,       130,      90,      500   },     // 雙手插腰 頭左轉
  {    55,      35,      80,      60,      70,     100,     70,      20,      40,     100,      20,       20,       55,       35,       75,       40,        50,       90,      800   },     // 身體右傾斜 右手平舉 左手擺頭頂 頭右轉
  {    55,      35,      80,      60,      70,     100,     70,      20,      40,     100,      20,       20,       55,       35,       75,       40,        50,       90,      500   },     // 身體右傾斜 右手平舉 左手擺頭頂 頭右轉
  {    75,      35,      80,      60,      90,     100,     20,      80,     100,     50,       20,       40,       55,       35,       75,       60,       130,      90,      800   },     // 身體左傾斜 左手平舉 右手擺頭頂 頭左轉
  {    75,      35,      80,      60,      90,     100,     20,      80,     100,     50,       20,       40,       55,       35,       75,       60,       130,      90,      500   },     // 身體左傾斜 左手平舉 右手擺頭頂 頭左轉
  {    65,      35,      80,      60,      80,     100,     70,      20,     100,     50,       20,       30,       55,       35,       75,       50,        90,       90,      500   },     // 雙手插腰
  {    65,      62,      15,      17,      80,      15,      95,      80,      40,      25,      100,      30,       95,      100,      48,       50,        90,       90,      800   },     // 蹲下 雙手向前平舉
  {    65,      62,      15,      17,      80,      15,      95,      80,      40,      25,      100,      30,       95,      100,      48,       50,        90,       90,      300   },     // 蹲下 雙手向前平舉
  {    65,      35,      80,      60,      80,     100,     70,      20,     100,     50,       20,       30,       55,       35,       75,       50,        90,       90,      500   },     // 雙手插腰
  {    65,      62,      15,      17,      80,      15,      95,      80,      40,      25,      100,      30,       95,      100,      48,       50,        90,       90,      800   },     // 蹲下 雙手向前平舉
  {    65,      62,      15,      17,      80,      15,      95,      80,      40,      25,      100,      30,       95,      100,      48,       50,        90,       90,      300   },     // 蹲下 雙手向前平舉
  {    65,      35,      80,      60,      80,     100,     95,      80,      40,      25,       20,       30,       55,       35,       75,       50,        90,       90,      800   }      // 立正
};


// 前進動作
int Servo_Prg_10_Step = 27;
int Servo_Prg_10 [][ALLMATRIX] PROGMEM = {
  //    0    ,    1    ,    2    ,    3    ,    4    ,    5    ,    6    ,    7    ,    8    ,    9    ,    10   ,    11   ,    12   ,    13   ,    14   ,    15   ,   G12   ,  G14   ,  ms
  {    65,      59,      36,      39,      80,     100,     95,      80,      40,      25,       20,       30,       75,       80,       50,       50,        90,       90,      500   },     // 淺蹲

  {    55,      59,      36,      39,      70,     100,     95,      80,      40,      25,       20,       20,       75,       80,       50,       40,        90,       90,      500   },     // 淺蹲 右傾斜
  {    55,      62,      15,      17,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       35,        90,       90,      600   },     // 淺蹲 右傾斜 左腳上抬
  {    55,      40,      45,      30,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       35,        90,       90,      500   },     // 淺蹲 右傾斜 左腳前移
  {    55,      40,      45,      30,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       40,        90,       90,      300   },     // 淺蹲 右傾斜 左腳放下

  {    75,      40,      45,      30,      90,     100,     95,      80,      40,      25,       20,       40,       75,       80,       50,       60,        90,       90,      500   },     // 淺蹲 左傾斜
  {    80,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       95,      100,      48,       60,        90,       90,      600   },     // 淺蹲 左傾斜 右腳上抬
  {    80,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       82,       70,       70,       60,        90,       90,      500   },     // 淺蹲 左傾斜 右腳前移
  {    75,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       82,       70,       70,       60,        90,       90,      300   },     // 淺蹲 左傾斜 右腳放下

  {    55,      59,      36,      39,      70,     100,     95,      80,      40,      25,       20,       20,       75,       80,       50,       40,        90,       90,      500   },     // 淺蹲 右傾斜
  {    55,      62,      15,      17,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       35,        90,       90,      600   },     // 淺蹲 右傾斜 左腳上抬
  {    55,      40,      45,      30,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       35,        90,       90,      500   },     // 淺蹲 右傾斜 左腳前移
  {    55,      40,      45,      30,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       40,        90,       90,      300   },     // 淺蹲 右傾斜 左腳放下

  {    75,      40,      45,      30,      90,     100,     95,      80,      40,      25,       20,       40,       75,       80,       50,       60,        90,       90,      500   },     // 淺蹲 左傾斜
  {    80,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       95,      100,      48,       60,        90,       90,      600   },     // 淺蹲 左傾斜 右腳上抬
  {    80,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       82,       70,       70,       60,        90,       90,      500   },     // 淺蹲 左傾斜 右腳前移
  {    75,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       82,       70,       70,       60,        90,       90,      300   },     // 淺蹲 左傾斜 右腳放下

  {    55,      59,      36,      39,      70,     100,     95,      80,      40,      25,       20,       20,       75,       80,       50,       40,        90,       90,      500   },     // 淺蹲 右傾斜
  {    55,      62,      15,      17,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       35,        90,       90,      600   },     // 淺蹲 右傾斜 左腳上抬
  {    55,      40,      45,      30,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       35,        90,       90,      500   },     // 淺蹲 右傾斜 左腳前移
  {    55,      40,      45,      30,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       40,        90,       90,      300   },     // 淺蹲 右傾斜 左腳放下

  {    75,      40,      45,      30,      90,     100,     95,      80,      40,      25,       20,       40,       75,       80,       50,       60,        90,       90,      500   },     // 淺蹲 左傾斜
  {    80,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       95,      100,      48,       60,        90,       90,      600   },     // 淺蹲 左傾斜 右腳上抬
  {    80,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       82,       70,       70,       60,        90,       90,      500   },     // 淺蹲 左傾斜 右腳前移
  {    75,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       82,       70,       70,       60,        90,       90,      300   },     // 淺蹲 左傾斜 右腳放下

  {    55,      59,      36,      39,      70,     100,     95,      80,      40,      25,       20,       20,       75,       80,       50,       40,        90,       90,      500   },     // 淺蹲 右傾斜
  {    65,      35,      80,      60,      80,     100,     95,      80,      40,      25,       20,       30,       55,       35,       75,       50,        90,       90,      300   }      // 立正
};


// 後退動作
int Servo_Prg_11_Step = 19;
int Servo_Prg_11 [][ALLMATRIX] PROGMEM = {
  //    0    ,    1    ,    2    ,    3    ,    4    ,    5    ,    6    ,    7    ,    8    ,    9    ,    10   ,    11   ,    12   ,    13   ,    14   ,    15   ,   G12   ,  G14   ,  ms
  {    65,      59,      36,      39,      80,     100,     95,      80,      40,      25,       20,       30,       75,       80,       50,       50,        90,       90,      500   },     // 淺蹲

  {    55,      59,      36,      39,      70,     100,     95,      80,      40,      25,       20,       20,       75,       80,       50,       40,        90,       90,      500   },     // 淺蹲 右傾斜
  {    55,      62,      15,      17,      70,      70,      95,      80,      40,      25,        0,        20,       75,       80,       50,       35,       130,      90,      600   },     // 淺蹲 右傾斜 左腳上抬
  {    55,      82,      48,      75,      70,      70,      95,      80,      40,      25,        0,        20,       75,       80,       50,       35,       130,      90,      500   },     // 淺蹲 右傾斜 左腳後移
  {    55,      55,      80,      80,      70,      70,      95,      80,      40,      25,        0,        20,       75,       80,       50,       35,       130,      90,      300   },     // 淺蹲 右傾斜 左腳放下

  {    75,      40,      45,      30,      90,     100,     95,      80,      40,      25,       20,       40,       75,       80,       50,       60,        90,       90,      500   },     // 淺蹲 左傾斜
  {    80,      59,      36,      39,      90,     120,     95,      80,      40,      25,       50,       40,       95,      100,      48,       60,        50,       90,      600   },     // 淺蹲 左傾斜 右腳上抬
  {    80,      59,      36,      39,      90,     120,     95,      80,      40,      25,       50,       40,       42,       70,       27,       60,        50,       90,      500   },     // 淺蹲 左傾斜 右腳後移
  {    80,      59,      36,      39,      90,     120,     95,      80,      40,      25,       50,       40,       35,       35,       51,       60,        50,       90,      300   },     // 淺蹲 左傾斜 右腳放下

  {    55,      59,      36,      39,      70,     100,     95,      80,      40,      25,       20,       20,       75,       80,       50,       40,        90,       90,      500   },     // 淺蹲 右傾斜
  {    55,      62,      15,      17,      70,      70,      95,      80,      40,      25,        0,        20,       75,       80,       50,       35,       130,      90,      600   },     // 淺蹲 右傾斜 左腳上抬
  {    55,      82,      48,      75,      70,      70,      95,      80,      40,      25,        0,        20,       75,       80,       50,       35,       130,      90,      500   },     // 淺蹲 右傾斜 左腳後移
  {    55,      55,      80,      80,      70,      70,      95,      80,      40,      25,        0,        20,       75,       80,       50,       35,       130,      90,      300   },     // 淺蹲 右傾斜 左腳放下

  {    75,      40,      45,      30,      90,     100,     95,      80,      40,      25,       20,       40,       75,       80,       50,       60,        90,       90,      500   },     // 淺蹲 左傾斜
  {    80,      59,      36,      39,      90,     120,     95,      80,      40,      25,       50,       40,       95,      100,      48,       60,        50,       90,      600   },     // 淺蹲 左傾斜 右腳上抬
  {    80,      59,      36,      39,      90,     120,     95,      80,      40,      25,       50,       40,       42,       70,       27,       60,        50,       90,      500   },     // 淺蹲 左傾斜 右腳後移
  {    80,      59,      36,      39,      90,     120,     95,      80,      40,      25,       50,       40,       35,       35,       51,       60,        50,       90,      300   },     // 淺蹲 左傾斜 右腳放下

  {    55,      59,      36,      39,      70,     100,     95,      80,      40,      25,       20,       20,       75,       80,       50,       40,        90,       90,      500   },     // 淺蹲 右傾斜
  {    65,      35,      80,      60,      80,     100,     95,      80,      40,      25,       20,       30,       55,       35,       75,       50,        90,       90,      300   }      // 立正
};


// 左轉動作
int Servo_Prg_12_Step = 27;
int Servo_Prg_12 [][ALLMATRIX] PROGMEM = {
  //    0    ,    1    ,    2    ,    3    ,    4    ,    5    ,    6    ,    7    ,    8    ,    9    ,    10   ,    11   ,    12   ,    13   ,    14   ,    15   ,   G12   ,  G14   ,  ms
  {    65,      59,      36,      39,      80,     100,     95,      80,      40,      25,       20,       30,       75,       80,       50,       50,        90,       90,      500   },     // 淺蹲

  {    75,      40,      45,      30,      90,     100,     95,      80,      40,      25,       20,       40,       75,       80,       50,       60,        90,       90,      500   },     // 淺蹲 左傾斜
  {    80,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       95,      100,      48,       60,        90,       90,      600   },     // 淺蹲 左傾斜 右腳上抬
  {    80,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       82,       70,       70,       60,        90,       90,      500   },     // 淺蹲 左傾斜 右腳前移
  {    75,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       82,       70,       70,       60,        90,       90,      300   },     // 淺蹲 左傾斜 右腳放下

  {    55,      59,      36,      39,      70,     100,     95,      80,      40,      25,       20,       20,       75,       80,       50,       40,        90,       90,      500   },     // 淺蹲 右傾斜
  {    55,      62,      15,      17,      70,      70,      95,      80,      40,      25,        0,        20,       75,       80,       50,       35,       130,      90,      600   },     // 淺蹲 右傾斜 左腳上抬
  {    55,      82,      48,      75,      70,      70,      95,      80,      40,      25,        0,        20,       75,       80,       50,       35,       130,      90,      500   },     // 淺蹲 右傾斜 左腳後移
  {    55,      55,      80,      80,      70,      70,      95,      80,      40,      25,        0,        20,       75,       80,       50,       35,       130,      90,      300   },     // 淺蹲 右傾斜 左腳放下

  {    75,      40,      45,      30,      90,     100,     95,      80,      40,      25,       20,       40,       75,       80,       50,       60,        90,       90,      500   },     // 淺蹲 左傾斜
  {    80,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       95,      100,      48,       60,        90,       90,      600   },     // 淺蹲 左傾斜 右腳上抬
  {    80,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       82,       70,       70,       60,        90,       90,      500   },     // 淺蹲 左傾斜 右腳前移
  {    75,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       82,       70,       70,       60,        90,       90,      300   },     // 淺蹲 左傾斜 右腳放下

  {    55,      59,      36,      39,      70,     100,     95,      80,      40,      25,       20,       20,       75,       80,       50,       40,        90,       90,      500   },     // 淺蹲 右傾斜
  {    55,      62,      15,      17,      70,      70,      95,      80,      40,      25,        0,        20,       75,       80,       50,       35,       130,      90,      600   },     // 淺蹲 右傾斜 左腳上抬
  {    55,      82,      48,      75,      70,      70,      95,      80,      40,      25,        0,        20,       75,       80,       50,       35,       130,      90,      500   },     // 淺蹲 右傾斜 左腳後移
  {    55,      55,      80,      80,      70,      70,      95,      80,      40,      25,        0,        20,       75,       80,       50,       35,       130,      90,      300   },     // 淺蹲 右傾斜 左腳放下

  {    75,      40,      45,      30,      90,     100,     95,      80,      40,      25,       20,       40,       75,       80,       50,       60,        90,       90,      500   },     // 淺蹲 左傾斜
  {    80,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       95,      100,      48,       60,        90,       90,      600   },     // 淺蹲 左傾斜 右腳上抬
  {    80,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       82,       70,       70,       60,        90,       90,      500   },     // 淺蹲 左傾斜 右腳前移
  {    75,      59,      36,      39,      90,      70,      95,      80,      40,      25,        0,        40,       82,       70,       70,       60,        90,       90,      300   },     // 淺蹲 左傾斜 右腳放下

  {    55,      59,      36,      39,      70,     100,     95,      80,      40,      25,       20,       20,       75,       80,       50,       40,        90,       90,      500   },     // 淺蹲 右傾斜
  {    55,      62,      15,      17,      70,      70,      95,      80,      40,      25,        0,        20,       75,       80,       50,       35,       130,      90,      600   },     // 淺蹲 右傾斜 左腳上抬
  {    55,      82,      48,      75,      70,      70,      95,      80,      40,      25,        0,        20,       75,       80,       50,       35,       130,      90,      500   },     // 淺蹲 右傾斜 左腳後移
  {    55,      55,      80,      80,      70,      70,      95,      80,      40,      25,        0,        20,       75,       80,       50,       35,       130,      90,      300   },     // 淺蹲 右傾斜 左腳放下

  {    75,      40,      45,      30,      90,     100,     95,      80,      40,      25,       20,       40,       75,       80,       50,       60,        90,       90,      500   },     // 淺蹲 左傾斜
  {    65,      35,      80,      60,      80,     100,     95,      80,      40,      25,       20,       30,       55,       35,       75,       50,        90,       90,      300   }      // 立正
};


// 右轉動作
int Servo_Prg_13_Step = 27;
int Servo_Prg_13 [][ALLMATRIX] PROGMEM = {
  //    0    ,    1    ,    2    ,    3    ,    4    ,    5    ,    6    ,    7    ,    8    ,    9    ,    10   ,    11   ,    12   ,    13   ,    14   ,    15   ,   G12   ,  G14   ,  ms
  {    65,      59,      36,      39,      80,     100,     95,      80,      40,      25,       20,       30,       75,       80,       50,       50,        90,       90,      500   },     // 淺蹲

  {    55,      59,      36,      39,      70,     100,     95,      80,      40,      25,       20,       20,       75,       80,       50,       40,        90,       90,      500   },     // 淺蹲 右傾斜
  {    55,      62,      15,      17,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       35,        90,       90,      600   },     // 淺蹲 右傾斜 左腳上抬
  {    55,      40,      45,      30,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       35,        90,       90,      500   },     // 淺蹲 右傾斜 左腳前移
  {    55,      40,      45,      30,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       40,        90,       90,      300   },     // 淺蹲 右傾斜 左腳放下

  {    75,      40,      45,      30,      90,     100,     95,      80,      40,      25,       20,       40,       75,       80,       50,       60,        90,       90,      500   },     // 淺蹲 左傾斜
  {    80,      59,      36,      39,      90,     120,     95,      80,      40,      25,       50,       40,       95,      100,      48,       60,        50,       90,      600   },     // 淺蹲 左傾斜 右腳上抬
  {    80,      59,      36,      39,      90,     120,     95,      80,      40,      25,       50,       40,       42,       70,       27,       60,        50,       90,      500   },     // 淺蹲 左傾斜 右腳後移
  {    80,      59,      36,      39,      90,     120,     95,      80,      40,      25,       50,       40,       35,       35,       51,       60,        50,       90,      300   },     // 淺蹲 左傾斜 右腳放下

  {    55,      59,      36,      39,      70,     100,     95,      80,      40,      25,       20,       20,       75,       80,       50,       40,        90,       90,      500   },     // 淺蹲 右傾斜
  {    55,      62,      15,      17,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       35,        90,       90,      600   },     // 淺蹲 右傾斜 左腳上抬
  {    55,      40,      45,      30,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       35,        90,       90,      500   },     // 淺蹲 右傾斜 左腳前移
  {    55,      40,      45,      30,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       40,        90,       90,      300   },     // 淺蹲 右傾斜 左腳放下

  {    75,      40,      45,      30,      90,     100,     95,      80,      40,      25,       20,       40,       75,       80,       50,       60,        90,       90,      500   },     // 淺蹲 左傾斜
  {    80,      59,      36,      39,      90,     120,     95,      80,      40,      25,       50,       40,       95,      100,      48,       60,        50,       90,      600   },     // 淺蹲 左傾斜 右腳上抬
  {    80,      59,      36,      39,      90,     120,     95,      80,      40,      25,       50,       40,       42,       70,       27,       60,        50,       90,      500   },     // 淺蹲 左傾斜 右腳後移
  {    80,      59,      36,      39,      90,     120,     95,      80,      40,      25,       50,       40,       35,       35,       51,       60,        50,       90,      300   },     // 淺蹲 左傾斜 右腳放下

  {    55,      59,      36,      39,      70,     100,     95,      80,      40,      25,       20,       20,       75,       80,       50,       40,        90,       90,      500   },     // 淺蹲 右傾斜
  {    55,      62,      15,      17,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       35,        90,       90,      600   },     // 淺蹲 右傾斜 左腳上抬
  {    55,      40,      45,      30,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       35,        90,       90,      500   },     // 淺蹲 右傾斜 左腳前移
  {    55,      40,      45,      30,      70,     120,     95,      80,      40,      25,       50,       20,       75,       80,       50,       40,        90,       90,      300   },     // 淺蹲 右傾斜 左腳放下

  {    75,      40,      45,      30,      90,     100,     95,      80,      40,      25,       20,       40,       75,       80,       50,       60,        90,       90,      500   },     // 淺蹲 左傾斜
  {    80,      59,      36,      39,      90,     120,     95,      80,      40,      25,       50,       40,       95,      100,      48,       60,        50,       90,      600   },     // 淺蹲 左傾斜 右腳上抬
  {    80,      59,      36,      39,      90,     120,     95,      80,      40,      25,       50,       40,       42,       70,       27,       60,        50,       90,      500   },     // 淺蹲 左傾斜 右腳後移
  {    80,      59,      36,      39,      90,     120,     95,      80,      40,      25,       50,       40,       35,       35,       51,       60,        50,       90,      300   },     // 淺蹲 左傾斜 右腳放下

  {    55,      59,      36,      39,      70,     100,     95,      80,      40,      25,       20,       20,       75,       80,       50,       40,        90,       90,      500   },     // 淺蹲 右傾斜
  {    65,      35,      80,      60,      80,     100,     95,      80,      40,      25,       20,       30,       55,       35,       75,       50,        90,       90,      300   }      // 立正
};

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
