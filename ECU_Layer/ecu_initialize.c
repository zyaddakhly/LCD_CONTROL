#include "ecu_initialize.h"



lcd_4bit_t lcd_1 = 
{
    .lcd_rs.port = PORTC_INDEX,
    .lcd_rs.pin = GPIO_PIN0,
    .lcd_rs.direction = GPIO_OUTPUT,
    .lcd_rs.logic = GPIO_LOW,
    
    .lcd_en.port = PORTC_INDEX,
    .lcd_en.pin = GPIO_PIN1,
    .lcd_en.direction = GPIO_OUTPUT,
    .lcd_en.logic = GPIO_LOW,
    
    
    .lcd_data[0].port = PORTC_INDEX,
    .lcd_data[0].pin = GPIO_PIN2,
    .lcd_data[0].direction = GPIO_OUTPUT,
    .lcd_data[0].logic= GPIO_LOW,
    
    
    .lcd_data[1].port = PORTC_INDEX,
    .lcd_data[1].pin = GPIO_PIN3,
    .lcd_data[1].direction = GPIO_OUTPUT,
    .lcd_data[1].logic= GPIO_LOW,
    
    .lcd_data[2].port = PORTC_INDEX,
    .lcd_data[2].pin = GPIO_PIN4,
    .lcd_data[2].direction = GPIO_OUTPUT,
    .lcd_data[2].logic= GPIO_LOW,
    
    
    .lcd_data[3].port = PORTC_INDEX,
    .lcd_data[3].pin = GPIO_PIN5,
    .lcd_data[3].direction = GPIO_OUTPUT,
    .lcd_data[3].logic= GPIO_LOW,
    
    
    
    
};




lcd_8bit_t lcd_2 = 
{
    .lcd_rs.port = PORTC_INDEX,
    .lcd_rs.pin = GPIO_PIN6,
    .lcd_rs.direction = GPIO_OUTPUT,
    .lcd_rs.logic = GPIO_LOW,
    
    .lcd_en.port = PORTC_INDEX,
    .lcd_en.pin = GPIO_PIN7,
    .lcd_en.direction = GPIO_OUTPUT,
    .lcd_en.logic = GPIO_LOW,
    
    
    .lcd_data[0].port = PORTD_INDEX,
    .lcd_data[0].pin = GPIO_PIN0,
    .lcd_data[0].direction = GPIO_OUTPUT,
    .lcd_data[0].logic= GPIO_LOW,
    
    
    .lcd_data[1].port = PORTD_INDEX,
    .lcd_data[1].pin = GPIO_PIN1,
    .lcd_data[1].direction = GPIO_OUTPUT,
    .lcd_data[1].logic= GPIO_LOW,
    
    .lcd_data[2].port = PORTD_INDEX,
    .lcd_data[2].pin = GPIO_PIN2,
    .lcd_data[2].direction = GPIO_OUTPUT,
    .lcd_data[2].logic= GPIO_LOW,
    
    
    .lcd_data[3].port = PORTD_INDEX,
    .lcd_data[3].pin = GPIO_PIN3,
    .lcd_data[3].direction = GPIO_OUTPUT,
    .lcd_data[3].logic= GPIO_LOW,
    
    
    
    .lcd_data[4].port = PORTD_INDEX,
    .lcd_data[4].pin = GPIO_PIN4,
    .lcd_data[4].direction = GPIO_OUTPUT,
    .lcd_data[4].logic= GPIO_LOW,
    
    .lcd_data[5].port = PORTD_INDEX,
    .lcd_data[5].pin = GPIO_PIN5,
    .lcd_data[5].direction = GPIO_OUTPUT,
    .lcd_data[5].logic= GPIO_LOW,
    
    
    .lcd_data[6].port = PORTD_INDEX,
    .lcd_data[6].pin = GPIO_PIN6,
    .lcd_data[6].direction = GPIO_OUTPUT,
    .lcd_data[6].logic= GPIO_LOW,
    
    
    .lcd_data[7].port = PORTD_INDEX,
    .lcd_data[7].pin = GPIO_PIN7,
    .lcd_data[7].direction = GPIO_OUTPUT,
    .lcd_data[7].logic= GPIO_LOW,
    
    
    
    
};

relay_t relay = 
{
    .relay_port = PORTA_INDEX,
    .relay_pin  = GPIO_PIN0,
    .relay_status = RELAY_OFF_STATUS
            
    
};
keypad_t keypad =
{
    .keypad_row_pin[0].port = PORTD_INDEX,
    .keypad_row_pin[0].pin = GPIO_PIN0,
    .keypad_row_pin[0].direction = GPIO_OUTPUT,
    .keypad_row_pin[0].logic = GPIO_LOW,
    
    
    .keypad_row_pin[1].port = PORTD_INDEX,
    .keypad_row_pin[1].pin = GPIO_PIN1,
    .keypad_row_pin[1].direction = GPIO_OUTPUT,
    .keypad_row_pin[1].logic = GPIO_LOW,
    
    
    
    .keypad_row_pin[2].port = PORTD_INDEX,
    .keypad_row_pin[2].pin = GPIO_PIN2,
    .keypad_row_pin[2].direction = GPIO_OUTPUT,
    .keypad_row_pin[2].logic = GPIO_LOW,
    
    
    .keypad_row_pin[3].port = PORTD_INDEX,
    .keypad_row_pin[3].pin = GPIO_PIN3,
    .keypad_row_pin[3].direction = GPIO_OUTPUT,
    .keypad_row_pin[3].logic = GPIO_LOW,
    
    
    
    
    .keypad_colums_pin[0].port = PORTD_INDEX,
    .keypad_colums_pin[0].pin = GPIO_PIN4,
    .keypad_colums_pin[0].direction =GPIO_INPUT,
    .keypad_colums_pin[0].logic = GPIO_LOW,
    
    
    
    .keypad_colums_pin[1].port = PORTD_INDEX,
    .keypad_colums_pin[1].pin = GPIO_PIN5,
    .keypad_colums_pin[1].direction =GPIO_INPUT,
    .keypad_colums_pin[1].logic = GPIO_LOW,
    
    .keypad_colums_pin[2].port = PORTD_INDEX,
    .keypad_colums_pin[2].pin = GPIO_PIN6,
    .keypad_colums_pin[2].direction =GPIO_INPUT,
    .keypad_colums_pin[2].logic = GPIO_LOW,
    
    
    .keypad_colums_pin[3].port = PORTD_INDEX,
    .keypad_colums_pin[3].pin = GPIO_PIN7,
    .keypad_colums_pin[3].direction =GPIO_INPUT,
    .keypad_colums_pin[3].logic = GPIO_LOW,
};




dc_motor_t motor = 
{
    .dc_motor[0].dc_motor_port = PORTC_INDEX,
    .dc_motor[0].dc_motor_pin = GPIO_PIN6,
    .dc_motor[0].dc_motor_status = DC_MOTOR_OFF,
    
    .dc_motor[1].dc_motor_port = PORTC_INDEX,
    .dc_motor[1].dc_motor_pin = GPIO_PIN7,
    .dc_motor[1].dc_motor_status = DC_MOTOR_OFF,
    
   
};


seg_t seg1 = 
{
    .segment[0].port = PORTA_INDEX,
    .segment[0].pin = GPIO_PIN1,
    .segment[0].direction = GPIO_OUTPUT,
    .segment[0].logic = GPIO_LOW,
    
    
    
    .segment[1].port = PORTA_INDEX,
    .segment[1].pin = GPIO_PIN2,
    .segment[1].direction = GPIO_OUTPUT,
    .segment[1].logic = GPIO_LOW,
    
    
    .segment[2].port = PORTA_INDEX,
    .segment[2].pin = GPIO_PIN3,
    .segment[2].direction = GPIO_OUTPUT,
    .segment[2].logic = GPIO_LOW,
    
    .segment[3].port = PORTA_INDEX,
    .segment[3].pin = GPIO_PIN4,
    .segment[3].direction = GPIO_OUTPUT,
    .segment[3].logic = GPIO_LOW,
    
    .seg_type = SEG_COMMON_ANODE
};


seg_t seg2 = 
{
    .segment[0].port = PORTA_INDEX,
    .segment[0].pin = GPIO_PIN5,
    .segment[0].direction = GPIO_OUTPUT,
    .segment[0].logic = GPIO_LOW,
    
    
    
    .segment[1].port = PORTA_INDEX,
    .segment[1].pin = GPIO_PIN6,
    .segment[1].direction = GPIO_OUTPUT,
    .segment[1].logic = GPIO_LOW,
    
    
    .segment[2].port = PORTA_INDEX,
    .segment[2].pin = GPIO_PIN7,
    .segment[2].direction = GPIO_OUTPUT,
    .segment[2].logic = GPIO_LOW,
    
    .segment[3].port = PORTB_INDEX,
    .segment[3].pin = GPIO_PIN0,
    .segment[3].direction = GPIO_OUTPUT,
    .segment[3].logic = GPIO_LOW,
    
    .seg_type = SEG_COMMON_ANODE
};

led_t led = 
{
    .port = PORTA_INDEX,
    .pin = GPIO_PIN1,
    .led_status = LED_OFF
};



void ecu_initialize(void)
{
    Std_ReturnType ret = E_NOT_OK;
    ret = lcd_4bit_initialize(&lcd_1);
    ret = lcd_8bit_initialize(&lcd_2);
    /* Keypad*/
    ret = keypad_initialize(&keypad);
    /*Relay*/
    ret = relay_initialize(&relay);
    /*motor*/
    ret = dc_motor_initialize(&motor);
    /*Seven Seg*/
    ret = led_initialize(&led);
    
    
}

