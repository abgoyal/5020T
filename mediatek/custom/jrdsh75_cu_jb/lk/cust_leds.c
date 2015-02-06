//#include <platform/cust_leds.h>
#include <cust_leds.h>
//#include <asm/arch/mt6577_pwm.h>
#include <platform/mt_pwm.h>

extern int DISP_SetBacklight(int level);

static struct cust_mt65xx_led cust_led_list[MT65XX_LED_TYPE_TOTAL] = {
	{"red",               MT65XX_LED_MODE_PWM, PWM1,{0}},//yang pingchao added for turn off led 2013-05-26
	{"green",             MT65XX_LED_MODE_NONE, -1,{0}},
	{"blue",              MT65XX_LED_MODE_NONE, -1,{0}},
	{"jogball-backlight", MT65XX_LED_MODE_NONE, -1,{0}},
	{"keyboard-backlight",MT65XX_LED_MODE_NONE, -1,{0}},
	{"button-backlight",  MT65XX_LED_MODE_PMIC, MT65XX_LED_PMIC_BUTTON,{0}},
	{"lcd-backlight",     MT65XX_LED_MODE_PWM, PWM3,{1,0,16,16}},
};

struct cust_mt65xx_led *get_cust_led_list(void)
{
	return cust_led_list;
}

