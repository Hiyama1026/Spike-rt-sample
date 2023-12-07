#include <kernel.h>

/*
 *  タスクの優先度の定義
 */

#define MAIN_PRIORITY	5		/* メインタスクの優先度 */
#define BUTTON_CYC_PRIORITY	5		/* 周期ハンドラの優先度 */
#define MOTOR_PRIORITY	4		/* モータタスクの優先度 */

/*
 *  ターゲットに依存する可能性のある定数の定義
 */

#ifndef TASK_PORTID
#define	TASK_PORTID		1			/* 文字入力するシリアルポートID */
#endif /* TASK_PORTID */

#ifndef STACK_SIZE
#define	STACK_SIZE		4096		/* タスクのスタックサイズ */
#endif /* STACK_SIZE */

#define MOTOR_A 1
#define MOTOR_B 2

/*
 *  関数のプロトタイプ宣言
 */
#ifndef TOPPERS_MACRO_ONLY

extern void	main_task(intptr_t exinf);
extern void	motor_task(intptr_t exinf);
extern void	but_cyc_handler(intptr_t exinf);

#endif /* TOPPERS_MACRO_ONLY */

static uint8_t img_smile[1][25] = {
  {
    0b0000000, 0b0000000, 0b0000000, 0b0000000, 0b0000000,
    0b0000000, 0b1100100, 0b0000000, 0b1100100, 0b0000000,
    0b0000000, 0b0000000, 0b0000000, 0b0000000, 0b0000000, 
    0b1100100, 0b0000000, 0b0000000, 0b0000000, 0b1100100,
    0b0000000, 0b1100100, 0b1100100, 0b1100100, 0b0000000,
  },
};