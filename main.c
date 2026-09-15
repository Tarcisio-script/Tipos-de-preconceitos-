#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "Portuguese");
	int opcao, resultado, continuar;
	char opcao2[4], conti[4];	
	continuar = 1;
	while (continuar == 1){
	system("cls");
	printf ("\033[1;36m################################\033[0m\n    RESPEITO COMEÇA COM VOCÊ\n\033[1;36m################################\033[0m\n");
	printf (" 1 - Racismo\n 2 - Discriminação Religiosa\n 3 - Misoginia\n 4 - Preconceito contra Pessoas com Deficiência\n 5 - Cyberbullying\n 6 - Uso Indevido de Imagem\n 7 - Discriminação de Gênero\n");
	printf ("Qual opção você deseja se aprofundar? ");
	scanf ("%d", & opcao);
		switch (opcao){
			case 1:
				system("cls");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf ("O que seria o racismo?\n\n O racismo é uma forma de discriminação baseada na raça, a partir do falso entendimento de que haveria raças humanas superiores a outras.\n O racismo pode se manifestar de diferentes formas, mas é, sobretudo, uma forma de violência contra as populações negras.\n Fonte: Brasilescola\n\n");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf("		\033[31m ### Discriminar alguém pela cor ou etnia é crime.###\033[0m\n A pena pode incluir reclusão e outras sanções previstas na legislação brasileira.\n A discriminação por cor é crime grave no Brasil. Conforme a Lei nº 7.716/1989, atos de preconceito ou discriminação de raça e cor são inafiançáveis e imprescritíveis, com penas de reclusão que podem chegar até 5 anos, além de multa.\n A ofensa direcionada a uma pessoa específica por causa da cor (injúria racial) também possui pena rigorosa de 2 a 5anos de reclusã\n\n");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf  ("Isso ocorrêu pela internet? s/n ");
					scanf ("%9s", & opcao2);
					resultado = afirmacao (opcao2);
					if (resultado == 1){
						printf (" O racismo digital dói da mesma forma que o presencia, você nunca será inferior a alguém apenas pelo tom da pele, não deixe que as palavras de alguém ofusquem o seu brilho.\n Se você presenciar ou for a própria vítima de racismo, por favor denuncie.\n");
						printf("\033[1;36m=====================================================================================================================\033[0m\n");

					}
					else if (resultado == 2){
						printf ("O racismo é um problema enraizado na sociedade, ele se camufla átravel de piadinhas e mau gosto, não tenha medo de denunciar, todos juntos conttra o racismo\n");
						printf("\033[1;36m=====================================================================================================================\033[0m\n");
					}
					else
					printf ("Opção inválida\n");
					printf("\033[1;36m=====================================================================================================================\033[0m\n");

				break;
			case 2:
				system("cls");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf ("O que é Discriminação Religiosa?\n\n A intolerância religiosa é o ato de discriminar, ofender e rechaçar religiões, liturgias e cultos, ou ofender, discriminar, agredir pessoas por conta de suas práticas religiosas e crenças. \nFonte: Brasilescola\n\n");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf (" \033[31m ### Desrespeitar ou ofender alguém por causa de sua religião também é crime.###\033[0m\n Todas as pessoas possuem liberdade religiosa garantida pela Constituição Federal.  A discriminação ou intolerância religiosa é crime no Brasil.\n A Constituição Federal protege a liberdade de crença, e a legislação pune atos de preconceito, hostilidade ou agressão motivados por religião, também faz parte da Lei nº 7.716/1989\n\n");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf  ("Isso ocorrêu pela internet? s/n ");
					scanf ("%9s", & opcao2);
					resultado = afirmacao (opcao2);
					if (resultado == 1){
						printf ("A internet tem o poder de aproximar pessoas, mas, infelizmente, também pode se transformar em um espaço de ataques cruéis e intolerância. Se você sofreu discriminação religiosa online, a primeira coisa que preciso te dizer é que a culpa nunca é de quem pratica a sua fé, mas sim de quem escolhe destilar ódio.\n");
					printf("\033[1;36m=====================================================================================================================\033[0m\n");
					}
					else if (resultado == 2){
						printf ("O preconceito religioso no formato presencial dói profundamente, pois atinge você em um espaço onde deveria se sentir seguro.\n Se você sofreu uma agressão, ofensa ou constrangimento por causa da sua fé na rua, na escola, no trabalho ou em qualquer outro lugar, saiba que isso é crime de intolerância religiosa e você tem total direito de buscar justiça e proteção.\n");
					printf("\033[1;36m=====================================================================================================================\033[0m\n");
					}
					else
					printf ("Opção inválida\n s/n ");
					printf("\033[1;36m=====================================================================================================================\033[0m\n");
				break;
			case 3:
				system("cls");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf("O que é misogenia?\n\npalavra é uma união entre os termos gregos 'miseo' e 'gyne', cujos significados são respectivamente ódio e mulheres. Hoje, entende-se por comportamento misógino aquele que objetifica e deprecia as mulheres, através de violência física, moral, sexual, patrimonial ou psicólogica.\n Fonte: Minitério Publico\n\n");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf(" \033[31m ### Dependendo da conduta praticada, diversos crimes podem ser configurado ###\033[0m\n No Brasil, atos de misoginia (ódio ou aversão às mulheres) são punidos atualmente de forma difusa no Código Penal (como injúria ou difamação).\n No entanto, o Senado Federal aprovou o PL 896/2023 para equiparar a misoginia ao crime de racismo, tornando-a crime autônomo com pena de dois a cinco anos de prisão.\n\n");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf  ("Isso ocorrêu pela internet? s/n ");
					scanf ("%9s", & opcao2);
					resultado = afirmacao (opcao2);
					if (resultado == 1){
						printf ("O ódio distribuído contra as mulheres digitalmente é algo inaceitável. Em jogos, vídeos e em conversas, ele está presente e se esconde através de piadas de mau gosto.\n Não devemos deixar isso continuar; sempre denuncie as contas.\n");
					printf("\033[1;36m=====================================================================================================================\033[0m\n");
					}
					else if (resultado == 2){
						printf ("seja na rua, no trabalho, na escola ou em qualquer outro lugar, são inaceitáveis.\n O machismo muitas vezes se esconde atrás de atitudes cotidianas, comentários desrespeitosos e piadas de mau gosto que tentam diminuir ou constranger as mulheres. Sempre denuncie e não deixe que isso aconteça.\n");
					printf("\033[1;36m=====================================================================================================================\033[0m\n");
					}
					else
					printf ("Opção inválida\n");
					printf("\033[1;36m=====================================================================================================================\033[0m\n");
				break;
			case 4:
				system("cls");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf("O que é o preconceito contra pessoas com deficiência?\n\nO preconceito contra pessoas com deficiência é chamado de capacitismo, que é a discriminação ou a noção de que pessoas com deficiência são inferiores às demais.\n Fonte: iigual\n\n");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf(" \033[31m ### Praticar discriminação contra pessoas com deficiência pode gerar responsabilização criminal. ###\033[0m\n O artigo 88 da Lei nº 13.146/2015 define como crime punível com reclusão de 1 a 3 anos, além de multa, qualquer ato de praticar, induzir ou incitar o preconceito contra a pessoa por causa de sua condição\n\n");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf  ("Isso ocorrêu pela internet? s/n ");
					scanf ("%9s", & opcao2);
					resultado = afirmacao (opcao2);
					if (resultado == 1){
						printf ("O preconceito contra pessoas com deficiência na rede se disfarça de piada, de meme, de comentários 'inocentes' e até de falsos elogios que infantilizam ou tratam a existência de alguém como um mero 'exemplo de superação'.");
					printf("\033[1;36m=====================================================================================================================\033[0m\n");
					}
					else if (resultado == 2){
						printf ("O combate ao capacitismo é um dever coletivo e urgente para a construção de uma sociedade genuinamente justa.\n Historicamente, pessoas com deficiência têm sido rotuladas pela ótica da limitação, sendo reduzidas a estereótipos que flutuam entre a invalidez e o heroísmo forçado.\n Essa visão distorcida ignora a individualidade, a autonomia e o potencial de milhões de cidadãos, perpetuando a exclusão.");
					printf("\033[1;36m=====================================================================================================================\033[0m\n");
					}
					else
					printf ("Opção inválida\n");
					printf("\033[1;36m=====================================================================================================================\033[0m\n");
				break;
			case 5:
				system("cls");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf("O que é Cyberbullying?\n\n O cyberbullying é a prática da intimidação, da humilhação, da exposição vexatória, da perseguição, da calúnia e da difamação por meio de ambientes virtuais, como redes sociais, e-mail e aplicativos de mensagens. A incidência maior de casos de cyberbullying ocorre entre os adolescentes, porém há um número considerável de jovens adultos que utilizam essa prática criminosa.\nFonte:Brasilescola\n\n ");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf(" \033[31m ### Humilhar, ameaçar ou perseguir alguém pelas redes sociais também é crime. ###\033[0m\n O cyberbullying pode gerar responsabilização civil e criminal.\n O cyberbullying é crime no Brasil. Conforme a Lei nº 14.811/2024, a prática de intimidação sistemática virtual no Código Penal prevê pena de reclusão de dois a quatro anos, além de multa.\n\n");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf  ("Isso ocorrêu pela internet? s/n ");
					scanf ("%9s", & opcao2);
					resultado = afirmacao (opcao2);
					if (resultado == 1){
						printf ("Se você está passando por isso, lembre-se: a culpa não é sua. O cyberbullying diz muito mais sobre a covardia de quem ataca do que sobre quem você é.\n Nenhum comentário maldoso, mentira ou julgamento na internet define o seu valor.");
					printf("\033[1;36m=====================================================================================================================\033[0m\n");
					}
					else if (resultado == 2){
						printf ("bbbbbbbbbb");
					printf("\033[1;36m=====================================================================================================================\033[0m\n");
					}
					else
					printf ("Opção inválida\n");
					printf("\033[1;36m=====================================================================================================================\033[0m\n");
				break;
			case 6:
				system("cls");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf("O que é o Uso Indevido de Imagem?\nO uso indevido de imagem é a utilização da fotografia, do vídeo ou da feição de uma pessoa por terceiros sem a sua autorização prévia e expressa.\n Fonte: tjdf\n\n");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf("Compartilhar fotos ou vídeos de alguém sem autorização pode gerar processo judicial.\n \033[31m ### Dependendo da situação, também poderá configurar crime. ###\033[0m\n O uso indevido de imagem sem autorização é tratado primariamente como um ilícito civil que gera o dever de indenizar por danos morais ou materiais, mas pode configurar crime em situações específicas previstas\n");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf  ("Isso ocorrêu pela internet? s/n ");
					scanf ("%9s", & opcao2);
					resultado = afirmacao (opcao2);
					if (resultado == 1){
						printf ("Se você teve sua imagem exposta virtualmente saiba q a lei está do seu lado,\n O uso não autorizado de suas fotos ou vídeos viola sua privacidade e dá direito a indenização por danos morais. denuncie quem fez isso\n");
						printf("\033[1;36m=====================================================================================================================\033[0m\n");
					}
					else if (resultado == 2){
						printf ("Se você teve sua imagem exposta sem a sua autorização, quero que saiba que a culpa não é sua. Ninguém tem o direito de compartilhar, divulgar ou utilizar sua imagem sem o seu consentimento.\n Procure uma delegacia e denuncie a pessoa, com isso não se brinca\n");
						printf("\033[1;36m=====================================================================================================================\033[0m\n");
					}
					else
					printf ("Opção inválida\n");
					printf("\033[1;36m=====================================================================================================================\033[0m\n");
				break;
			case 7:
				system("cls");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf("O que é a Discriminação de Gênero? \n A discriminação de gênero acontece quando uma pessoa é tratada de forma injusta ou desigual por causa de seu gênero, sexo ou por não seguir expectativas consideradas “adequadas” para homens e mulheres.\n Fonte: ONU\n\n");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf(" \033[31m ### Homens e mulheres possuem os mesmos direitos perante a lei. ###\033[0m\n Nenhuma pessoa deve sofrer discriminação por motivo de gênero.\n A discriminação baseada em gênero e orientação sexual é combatida e punida pela Justiça no Brasil. Atos de preconceito contra identidade de gênero ou orientação sexual são enquadrados pelo Supremo Tribunal Federal nos crimes previstos na Lei do Racismo (Lei nº 7.716/1989), tornando-se condutas inafiançáveis e imprescritíveis.\n");
				printf("\033[1;36m=====================================================================================================================\033[0m\n");
				printf  ("Isso ocorrêu pela internet? s/n ");
					scanf ("%3s", & opcao2);
					resultado = afirmacao (opcao2);
					if (resultado == 1){
						printf ("Se você sofreu com “piadas” ou comentários preconceituosos sobre seu gênero, saiba que você é livre para ser quem quiser e viver como se sentir bem. Não dê ouvidos a quem deseja o seu mal. O preconceito dos outros não define quem você é.");
						printf("\033[1;36m=====================================================================================================================\033[0m\n");
					}
					else if (resultado == 2){
						printf ("Para quem sofreu violência por causa do seu gênero, é importante lembrar que a culpa nunca é da vítima. Ninguém merece ser humilhado, ameaçado, agredido ou desrespeitado por ser quem é.\n");
						printf("\033[1;36m=====================================================================================================================\033[0m\n");
					}
					else
					printf ("Opção inválida\n");
				break;
			default: 
			printf ("Opção inválida");
		}
		printf ("\n\033[1;36m#############################################################\033[0m\n");
		printf (" TODOS NÓS DEVEMOS RESPEITO AO PROXIMO\n");
		printf ("\033[1;36m#############################################################\033[0m\n\n");
		printf("O respeito às diferenças e a valorização da diversidade são pilares fundamentais para construirmos uma sociedade mais justa e acolhedora.\n É preciso reconhecer que qualquer forma de preconceito ou discriminação deve ser combatida diariamente, lembrando sempre que denunciar é um ato essencial de cidadania e de responsabilidade coletiva contra a impunidade.\n\n");
		printf("\033[1;36m=====================================================================================================================\033[0m\n");
    
   	 	printf("\n\nDeseja continuar outro tema? (s/n): ");
   		 scanf(" %c", &conti);
    	if (conti == 's') {
    continuar = 1;
}
else if (conti == 'n') {
    printf("Obrigado, programa encerrado.\n");
    continuar = 2;
    return 0;
}
else {
    printf("Opção inválida, tente novamente.\n");
}			

}
    return 0;
} 


	int afirmacao (char opcao2[10]){
	setlocale(LC_ALL, "Portuguese");
				if (strcmp (opcao2, "s") == 0 || strcmp (opcao2, "sim") == 0 || strcmp (opcao2, "Sim") == 0 || strcmp (opcao2, "S") == 0 || strcmp (opcao2, "SIM") == 0){ 
					printf("A internet não é terra sem lei e as provas digitais podem ser utilizadas pelas autoridades.\n\n");
					return 1;
				}
				else if (strcmp (opcao2, "n") == 0 || strcmp (opcao2, "não") == 0 || strcmp (opcao2, "Não") == 0 || strcmp (opcao2, "N") == 0 || strcmp (opcao2, "NÃO") == 0 || strcmp (opcao2, "Nao") == 0 || strcmp (opcao2, "N") == 0 || strcmp (opcao2, "NAO") == 0){
					printf ("isso tambem pode gerar responsabilização civil e criminal.\n\n ");
					return 2;
				}
				else 
				return 3;
	}
	
	
	
