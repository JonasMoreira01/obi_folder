#include <stdio.h>

main()
{
  int diametro, altura, largura, profundidade;
  
  scanf("%d", &diametro);
  scanf("%d %d %d", &altura, &largura, &profundidade);

  if ((diametro > altura) || (diametro > largura) || (diametro > profundidade))
    puts("N");
  else
    puts("S");      
}
