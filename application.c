/* 
 * File:   application.c
 * Author: zyadi
 *
 * Created on August 18, 2023, 8:01 AM
 */

#include "application.h"
void application_initialize(void);
/*Section Lcd Declaration*/
void Lcd_Welcome(void);
void Lcd_Face(uint8 row, uint8 colum);
void Lcd_dragon(uint8 row, uint8 colum);
void Animate_Dragon(void);
void Page_Start(void);
void Page_One(void);
void Page_Motor(void);
void Page_Relay(void);
void Page_Led(void);
void Page_7Seg(void);


Std_ReturnType ret = E_NOT_OK;
uint8 value;
uint8 st[4];

int main() {
    /*Page Welcome*/
    application_initialize();
    Page_Start();
    

    while (1) 
    {
        Page_One();
        ret = keypad_get_value(&keypad,&value);
        ret = lcd_4bit_send_char_data_pos(&lcd_1,4,1,value);
        switch(value)
        {
            case '1':
                value = 0;
                Page_Led();
                value = 0;
                
                break;
            case '2':
                value = 0;
                Page_Motor();
                value = 0;
                break;
                
            case '3':
                value = 0;
                Page_Relay();
                value = 0;
                break;

                break;
            default :;
                
        }
        

     }



    return 0;
}

void application_initialize(void) {
    Std_ReturnType ret = E_NOT_OK;
    ecu_initialize();
}

/*LCD FUNC*/
void Lcd_Welcome(void) {

    uint8 count = 0;
    for (count = 5; count < 8; count++) {
        ret = lcd_4bit_send_string_pos(&lcd_1, 2, count, "Welcome");
        __delay_ms(200);
        ret = lcd_4bit_send_string_pos(&lcd_1, 2, count, " ");

    }
    ret = lcd_4bit_send_string_pos(&lcd_1, 2, 6, "          ");
  



}

void Lcd_Face(uint8 row, uint8 colum) {
    uint8 ch1[8] = {
        0b01000,
        0b11000,
        0b00000,
        0b00001,
        0b00010,
        0b00010,
        0b00100,
        0b00100
    };
    uint8 ch2[8] = {
        0b00111,
        0b01000,
        0b10000,
        0b00000,
        0b00000,
        0b00000,
        0b00100,
        0b00000
    };
    uint8 ch3[8] = {
        0b11100,
        0b00010,
        0b00001,
        0b00000,
        0b00000,
        0b00000,
        0b00100,
        0b00000
    };
    uint8 ch4[8] = {
        0b00000,
        0b00010,
        0b00011,
        0b10000,
        0b01000,
        0b01000,
        0b00100,
        0b00100
    };






    uint8 ch5[8] = {
        0b00100,
        0b00100,
        0b00010,
        0b00010,
        0b00001,
        0b01000,
        0b11000,
        0b00000
    };


    uint8 ch6[8] = {
        0b00000,
        0b10000,
        0b01000,
        0b00100,
        0b00011,
        0b10000,
        0b01000,
        0b00111
    };

    uint8 ch7[8] = {
        0b00000,
        0b00001,
        0b00010,
        0b00100,
        0b11000,
        0b00001,
        0b00010,
        0b11100
    };

    uint8 ch8[8] = {
        0b00100,
        0b00100,
        0b01000,
        0b01000,
        0b10010,
        0b00011,
        0b00000,
        0b00000
    };
    ret = lcd_4bit_send_custom_char(&lcd_1, row, colum, ch1, 0);
    ret = lcd_4bit_send_custom_char(&lcd_1, row, colum + 1, ch2, 1);
    ret = lcd_4bit_send_custom_char(&lcd_1, row, colum + 2, ch3, 2);
    ret = lcd_4bit_send_custom_char(&lcd_1, row, colum + 3, ch4, 3);

    ret = lcd_4bit_send_custom_char(&lcd_1, (row + 1), colum, ch5, 4);
    ret = lcd_4bit_send_custom_char(&lcd_1, (row + 1), colum + 1, ch6, 5);
    ret = lcd_4bit_send_custom_char(&lcd_1, (row + 1), colum + 2, ch7, 6);
    ret = lcd_4bit_send_custom_char(&lcd_1, (row + 1), colum + 3, ch8, 7);


}

void Lcd_dragon(uint8 row, uint8 colum) {
    uint8 ch1[8] = {
        0b00000,
        0b00000,
        0b00000,
        0b10000,
        0b10000,
        0b11100,
        0b11111,
        0b11111
    };
    uint8 ch2[8] = {
        0b00001,
        0b00001,
        0b00001,
        0b00001,
        0b00001,
        0b00011,
        0b01111,
        0b11111
    };
    uint8 ch3[8] = {
        0b11111,
        0b10111,
        0b11111,
        0b11111,
        0b11100,
        0b11111,
        0b11100,
        0b11100
    };
    uint8 ch4[8] = {
        0b00010,
        0b00011,
        0b00011,
        0b00011,
        0b00011,
        0b00000,
        0b00000,
        0b00010
    };


    uint8 ch5[8] = {
        0b11111,
        0b11111,
        0b01111,
        0b00111,
        0b00011,
        0b00011,
        0b00010,
        0b00011
    };


    uint8 ch6[8] = {
        0b11111,
        0b11111,
        0b11111,
        0b11111,
        0b10110,
        0b00010,
        0b00010,
        0b00011
    };

    uint8 ch7[8] = {
        0b11111,
        0b11001,
        0b10000,
        0b00000,
        0b00000,
        0b00000,
        0b00000,
        0b00000
    };

    uint8 ch8[8] = {
        0b00000,
        0b00000,
        0b00000,
        0b00000,
        0b00000,
        0b00000,
        0b00000,
        0b00000
    };



    ret = lcd_4bit_send_custom_char(&lcd_1, row, colum, ch1, 0);
    ret = lcd_4bit_send_custom_char(&lcd_1, row, colum + 1, ch2, 1);
    ret = lcd_4bit_send_custom_char(&lcd_1, row, colum + 2, ch3, 2);
    ret = lcd_4bit_send_custom_char(&lcd_1, row, colum + 3, ch4, 3);

    ret = lcd_4bit_send_custom_char(&lcd_1, (row + 1), colum, ch5, 4);
    ret = lcd_4bit_send_custom_char(&lcd_1, (row + 1), colum + 1, ch6, 5);
    ret = lcd_4bit_send_custom_char(&lcd_1, (row + 1), colum + 2, ch7, 6);
    ret = lcd_4bit_send_custom_char(&lcd_1, (row + 1), colum + 3, ch8, 7);

}

void Animate_Dragon(void) {
    ret = lcd_4bit_send_string_pos(&lcd_1, 1, 1, "Load");
    uint8 count = 0;
    for (count = 1; count < 16; count++) {
        ret = lcd_4bit_send_string_pos(&lcd_1, 1, (count + 5), ".");
        Lcd_dragon(2, count);
        __delay_ms(50);
        ret = ret = lcd_4bit_send_string_pos(&lcd_1, 2, count, " ");
        ret = ret = lcd_4bit_send_string_pos(&lcd_1, 3, count, " ");

    }
    ret = ret = lcd_4bit_send_string_pos(&lcd_1, 2, count, "      ");
    ret = ret = lcd_4bit_send_string_pos(&lcd_1, 3, count, "      ");


}

void Page_Start(void) {
    Lcd_Welcome();
    ret = lcd_4bit_send_string_pos(&lcd_1, 2, 8, "Welcome");
    Lcd_Face(2, 2);
    Lcd_Face(2, 17);
    
    __delay_ms(3000);
    ret = lcd_4bit_send_command(&lcd_1, _LCD_CLEAR);

    Animate_Dragon();
    ret = lcd_4bit_send_command(&lcd_1, _LCD_CLEAR);
}

/*Section_Keypad_Lcd*/

void Page_One(void) {
    ret = lcd_4bit_send_string_pos(&lcd_1,1,1,"1- Led");
    ret = lcd_4bit_send_string_pos(&lcd_1,1,10,"2- MOTOR ");
    ret = lcd_4bit_send_string_pos(&lcd_1,2,1,"3- Relay");
    ret = lcd_4bit_send_string_pos(&lcd_1,3,1,"Enter Number ?");

}
/*Motor_Page*/

void Page_Motor(void)
{

    
    
    uint8 val = 0;
    ret = lcd_4bit_send_command(&lcd_1, _LCD_CLEAR);

    while(val != '4')
    {
        ret = lcd_4bit_send_string_pos(&lcd_1,1,1,"1-Forward");
        ret = lcd_4bit_send_string_pos(&lcd_1,1,11,"2-Reverse ");
        ret = lcd_4bit_send_string_pos(&lcd_1,2,1,"3-Stop");
        ret = lcd_4bit_send_string_pos(&lcd_1,2,11,"4- Prev");
        ret = lcd_4bit_send_string_pos(&lcd_1,3,1,"Enter Number ?");
        ret = keypad_get_value(&keypad,&val);
        ret = lcd_4bit_send_char_data_pos(&lcd_1,4,1,val);
        
        if(val == '1')
        {
            ret = dc_motor_move_right(&motor);
        }
        else if(val == '2')
        {
            ret = dc_motor_move_left(&motor);
        }
        else if(val == '3')
        {
            ret = dc_motor_stop(&motor);
        }
     
        else
        {
            
        }
            
    
    
    
            
    }
    ret = lcd_4bit_send_command(&lcd_1, _LCD_CLEAR);
    
    
    
    
    
    
    
    
    
    
    
    
    
}

void Page_Led(void)
{
    uint8 val = 0;
    ret = lcd_4bit_send_command(&lcd_1, _LCD_CLEAR);

    while(val != '4')
    {
        ret = lcd_4bit_send_string_pos(&lcd_1,1,1,"1- ON");
        ret = lcd_4bit_send_string_pos(&lcd_1,1,11,"2- OFF ");
        ret = lcd_4bit_send_string_pos(&lcd_1,2,1,"3-Flash");
        ret = lcd_4bit_send_string_pos(&lcd_1,2,11,"4-Prev");
        ret = lcd_4bit_send_string_pos(&lcd_1,3,1,"Enter Number ?");
        ret = keypad_get_value(&keypad,&val);
        ret = lcd_4bit_send_char_data_pos(&lcd_1,4,1,val);
        
        if(val == '1')
        {
            ret = led_turn_on(&led);
        }
        else if(val == '2')
        {
            ret = led_turn_off(&led);
        }
        else if(val == '3')
        {
            ret = led_toggle(&led);
            __delay_ms(150);
        }
        else if(val == '4')
        {
            break;
        }
        else
        {
            
        }
            
    
    
    
            
    }
    ret = lcd_4bit_send_command(&lcd_1, _LCD_CLEAR);

}

void Page_Relay(void)
{

    uint8 val = 0;
    ret = lcd_4bit_send_command(&lcd_1, _LCD_CLEAR);

    while(val != '4')
    {
        ret = lcd_4bit_send_string_pos(&lcd_1,1,1,"1- ON");
        ret = lcd_4bit_send_string_pos(&lcd_1,1,11,"2- OFF ");
        ret = lcd_4bit_send_string_pos(&lcd_1,2,1,"3-prev");
        ret = lcd_4bit_send_string_pos(&lcd_1,3,1,"Enter Number ?");
        ret = keypad_get_value(&keypad,&val);
        ret = lcd_4bit_send_char_data_pos(&lcd_1,4,1,val);
        
        if(val == '1')
        {
            ret = relay_turn_on(&relay);
        }
        else if(val == '2')
        {
            ret = relay_turn_off(&relay);
        }
        
        else
        {
            
        }
     
    }
    ret = lcd_4bit_send_command(&lcd_1, _LCD_CLEAR);
    
    
    
    
    
    
}

