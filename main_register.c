int main(void)
{

  HAL_Init();
  SystemClock_Config();
  MX_USART2_UART_Init( );
  GPIOA->MODER |= 1<<10;
  GPIOA->BSRR |= 1<<5;
  while (1)
  {
	  HAL_Delay (300);
	  GPIOA->BSRR |= 1<<5;
	  HAL_Delay(300);
	  GPIOA->BSRR |= 1<<21;
  }
}
