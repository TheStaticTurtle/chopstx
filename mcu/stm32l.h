#define PERIPH_BASE	0x40000000
#define APB1PERIPH_BASE PERIPH_BASE
#define APB2PERIPH_BASE	(PERIPH_BASE + 0x10000)
#define AHB1PERIPH_BASE	(PERIPH_BASE + 0x20000)
#define AHB2PERIPH_BASE	(PERIPH_BASE + 0x08000000)

struct RCC {
  volatile uint32_t CR;
  volatile uint32_t ICSCR;
  volatile uint32_t CFGR;
  volatile uint32_t PLLCFGR;

  volatile uint32_t PLLSAI1CFGR;
  volatile uint32_t RESERVED;
  volatile uint32_t CIER;
  volatile uint32_t CIFR;

  volatile uint32_t CICR;
  volatile uint32_t RESERVED;
  volatile uint32_t AHB1RSTR;
  volatile uint32_t AHB2RSTR;

  volatile uint32_t AHB3RSTR;
  volatile uint32_t RESERVED;
  volatile uint32_t APB1RSTR1;
  volatile uint32_t APB1RSTR2;

  volatile uint32_t APB2RSTR;
  volatile uint32_t RESERVED;
  volatile uint32_t AHB1ENRR;
  volatile uint32_t AHB2ENRR;

  volatile uint32_t AHB3ENRR;
  volatile uint32_t RESERVED;
  volatile uint32_t APB1ENRR1;
  volatile uint32_t APB1ENRR2;

  volatile uint32_t APB2ENRR;
  volatile uint32_t RESERVED;
  volatile uint32_t AHB1SMENR;
  volatile uint32_t AHB2SMENR;

  volatile uint32_t AHB3SMENR;
  volatile uint32_t RESERVED;
  volatile uint32_t APB1SMENR1;
  volatile uint32_t APB1SMENR2;

  volatile uint32_t APB2SMENR;
  volatile uint32_t RESERVED;
  volatile uint32_t CCIPR;
  volatile uint32_t RESERVED;

  volatile uint32_t BDCR;
  volatile uint32_t CSR;
  volatile uint32_t CRRCR;
  volatile uint32_t CCIPR2;
};

#define RCC_BASE		(AHB1PERIPH_BASE + 0x1000)
static struct RCC *const RCC = (struct RCC *)RCC_BASE;

struct PWR
{
  volatile uint32_t CR1;
  volatile uint32_t CR2;
  volatile uint32_t CR3;
  volatile uint32_t CR4;
  volatile uint32_t SR1;
  volatile uint32_t SR2;
  volatile uint32_t SCR;
  volatile uint32_t PUCRA;
  volatile uint32_t PDCRA;
  volatile uint32_t PUCRB;
  volatile uint32_t PDCRB;
  volatile uint32_t PUCRC;
  volatile uint32_t PDCRC;
  volatile uint32_t PUCRD;
  volatile uint32_t PDCRD;
  volatile uint32_t PUCRE;
  volatile uint32_t PDCRE;
  volatile uint32_t PUCRH;
  volatile uint32_t PDCRH;
};
static struct PWR *const PWR = ((struct PWR *)0x40007000);

struct GPIO {
  volatile uint32_t MODER;
  volatile uint32_t OTYPER;
  volatile uint32_t OSPEEDR;
  volatile uint32_t PUPDR;
  volatile uint32_t IDR;
  volatile uint32_t ODR;
  volatile uint32_t BSRR;
  volatile uint32_t LCKR;
  volatile uint32_t AFRL;
  volatile uint32_t AFRH;
  volatile uint32_t BRR;
};

#define GPIOA_BASE	(AHB2PERIPH_BASE)
#define GPIOA		((struct GPIO *) GPIOA_BASE)
#define GPIOB_BASE	(AHB2PERIPH_BASE + 0x0400)
#define GPIOB		((struct GPIO *) GPIOB_BASE)
#define GPIOC_BASE	(AHB2PERIPH_BASE + 0x0800)
#define GPIOC		((struct GPIO *) GPIOC_BASE)
#define GPIOD_BASE	(AHB2PERIPH_BASE + 0x0C00)
#define GPIOD		((struct GPIO *) GPIOD_BASE)
#define GPIOE_BASE	(AHB2PERIPH_BASE + 0x1000)
#define GPIOE		((struct GPIO *) GPIOE_BASE)
#define GPIOH_BASE	(AHB2PERIPH_BASE + 0x1C00)
#define GPIOH		((struct GPIO *) GPIOH_BASE)

struct FLASH {
  volatile uint32_t ACR;
  volatile uint32_t PDKEYR;
  volatile uint32_t KEYR;
  volatile uint32_t OPTKEYR;
  volatile uint32_t SR;
  volatile uint32_t CR;
  volatile uint32_t ECCR;
  volatile uint32_t RESERVED;
  volatile uint32_t OPTR;
  volatile uint32_t PCROP1SR;
  volatile uint32_t PCROP1ER;
  volatile uint32_t WRP1AR;
  volatile uint32_t WRP1BR;
};

#define FLASH_R_BASE	(AHB1PERIPH_BASE + 0x2000)
static struct FLASH *const FLASH = (struct FLASH *)FLASH_R_BASE;
