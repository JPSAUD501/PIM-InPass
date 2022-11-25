#include<stdio.h>
#include<string.h>
#include<ctype.h>

int lang = 0; // 0 for Portuguese, 1 for English - Default is Portuguese

struct defaultStrings {
    char languageSelected[100];
    char selectMasterPass[100];
    char errorMasterPass[100];
    char creatingChildPass[100];
    char selectedPass[100];
    char selectPass[100];
    char exit[100];
    char invalidOption[100];
    char exiting[100];
    char pressAnyKey[100];
    char decryptInPass[100];
    char decryptedInPass[100];
};

struct defaultStrings language[3] = {
    {
        "Language selected: English",
        "Enter your InPass password: ",
        "Please enter a valid password!",
        "Creating InPass passwords...",
        "Your InPass was created successfully using the password: ",
        "Select the password you want to use: ",
        "Exit InPass",
        "Invalid option!",
        "Exiting InPass...",
        "Press any key to continue...",
        "Decrypt InPass and get master key",
        "InPass master key",
    },
    {
        "Linguagem selecionada: Portugues",
        "Digite a senha do seu InPass: ",
        "Por favor, digite uma senha valida!",
        "Criando senhas do InPass...",
        "Seu InPass foi criado com sucesso usando a senha: ",
        "Selecione a senha que voce deseja usar: ",
        "Sair do InPass",
        "Opcao invalida!",
        "Saindo do InPass...",
        "Pressione qualquer tecla para continuar...",
        "Descriptografar o InPass e obter a chave mestra",
        "Clave maestra do InPass"
    },
    {
        "Idioma seleccionado: Español",
        "Introduzca su contraseña InPass:",
        "¡Por favor introduce una contraseña válida!",
        "Criação de contraseñas InPass...",
        "Su InPass se creó correctamente con la contraseña: ",
        "Seleccione la contraseña que desea utilizar:",
        "Salir de InPass",
        "¡Opción inválida!",
        "Saliendo de InPass...",
        "Pulse cualquier tecla para continuar...",
        "Descifrar InPass y obtener la clave maestra",
        "Clave maestra de InPass"
    }
};

char masterPass[20];

    struct inPass {
        char discord[20];
        char github[20];
        char instagram[20];
        char facebook[20];
        char twitter[20];
        char youtube[20];
        char gmail[20];
        char outlook[20];
        char yahoo[20];
        char linkedin[20];
        char pinterest[20];
    };

    struct inPass myInPass;

int main() {
    int option = 0;

    printf("========================================\n>>>>>>>>>>> InPass <<<<<<<<<<<\n========================================\n\n");

    do {
        printf("Please select a language to continue: (0 - English, 1 - Portuguese, 2 - Español)\n");
        scanf("%d", &lang);
        if (lang != 0 && lang != 1 && lang != 2) {
            printf("Invalid language selected. Please try again.\n");
        }
    } while (lang != 0 && lang != 1 && lang != 2);

    printf("%s\n", language[lang].languageSelected);

    printf("%s", language[lang].selectMasterPass);
    scanf("%19s", masterPass);
    // Lowercase the master password
    for (int i = 0; i < strlen(masterPass); i++) {
        masterPass[i] = tolower(masterPass[i]);
    }

    printf("%s\n", language[lang].creatingChildPass);

    createInPass();

    printf("%s %s\n", language[lang].selectedPass, masterPass);

    // Menu
    do {
        option = 0;
        printf("%s\n 1 - %s \n 2 - Discord\n 3 - GitHub\n 4 - Instagram\n 5 - Facebook\n 6 - Twitter\n 7 - YouTube\n 8 - Gmail\n 9 - Outlook\n 10 - Yahoo\n 11 - LinkedIn\n 12 - Pinterest\n 0 - %s\n", language[lang].selectPass, language[lang].decryptInPass, language[lang].exit);
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("%s: %s\n", language[lang].decryptedInPass, masterPass);
                break;
            case 2:
                printf("Discord InPass: %s\n", myInPass.discord);
                break;
            case 3:
                printf("GitHub InPass: %s\n", myInPass.github);
                break;
            case 4:
                printf("Instagram InPass: %s\n", myInPass.instagram);
                break;
            case 5:
                printf("Facebook InPass: %s\n", myInPass.facebook);
                break;
            case 6:
                printf("Twitter InPass: %s\n", myInPass.twitter);
                break;
            case 7:
                printf("YouTube InPass: %s\n", myInPass.youtube);
                break;
            case 8:
                printf("Gmail InPass: %s\n", myInPass.gmail);
                break;
            case 9:
                printf("Outlook InPass: %s\n", myInPass.outlook);
                break;
            case 10:
                printf("Yahoo InPass: %s\n", myInPass.yahoo);
                break;
            case 11:
                printf("LinkedIn InPass: %s\n", myInPass.linkedin);
                break;
            case 12:
                printf("Pinterest InPass: %s\n", myInPass.pinterest);
                break;
            case 0:
                printf("%s\n", language[lang].exiting);
                break;
            default:
                printf("%s\n", language[lang].invalidOption);
                break;
        }
        // Press any key to continue
        printf("%s\n", language[lang].pressAnyKey);
        getchar();
        getchar();
        printf("\n\n\n");
    } while (option != 0);

    return 0;
}

void createInPass() {
    // Usar o numero de caracteres do nome dos servicos como chave para criptografia
    // Discord
    for (int i = 0; i < strlen(masterPass); i++) {
        myInPass.discord[i] = masterPass[i] + strlen("discord") * strlen(masterPass);
        while (myInPass.discord[i] > 122 || myInPass.discord[i] < 97) {
            if (myInPass.discord[i] > 122) {
                myInPass.discord[i] -= 26;
            } else if (myInPass.discord[i] < 97) {
                myInPass.discord[i] += 26;
            }
        }
    }
    // Github
    for (int i = 0; i < strlen(masterPass); i++) {
        myInPass.github[i] = masterPass[i] + strlen("github") * strlen(masterPass);
        while (myInPass.github[i] > 122 || myInPass.github[i] < 97) {
            if (myInPass.github[i] > 122) {
                myInPass.github[i] -= 26;
            } else if (myInPass.github[i] < 97) {
                myInPass.github[i] += 26;
            }
        }
    }
    // Instagram
    for (int i = 0; i < strlen(masterPass); i++) {
        myInPass.instagram[i] = masterPass[i] + strlen("instagram") * strlen(masterPass);
        while (myInPass.instagram[i] > 122 || myInPass.instagram[i] < 97) {
            if (myInPass.instagram[i] > 122) {
                myInPass.instagram[i] -= 26;
            } else if (myInPass.instagram[i] < 97) {
                myInPass.instagram[i] += 26;
            }
        }
    }
    // Facebook
    for (int i = 0; i < strlen(masterPass); i++) {
        myInPass.facebook[i] = masterPass[i] + strlen("facebook") * strlen(masterPass);
        while (myInPass.facebook[i] > 122 || myInPass.facebook[i] < 97) {
            if (myInPass.facebook[i] > 122) {
                myInPass.facebook[i] -= 26;
            } else if (myInPass.facebook[i] < 97) {
                myInPass.facebook[i] += 26;
            }
        }
    }
    // Twitter
    for (int i = 0; i < strlen(masterPass); i++) {
        myInPass.twitter[i] = masterPass[i] + strlen("twitter") * strlen(masterPass);
        while (myInPass.twitter[i] > 122 || myInPass.twitter[i] < 97) {
            if (myInPass.twitter[i] > 122) {
                myInPass.twitter[i] -= 26;
            } else if (myInPass.twitter[i] < 97) {
                myInPass.twitter[i] += 26;
            }
        }
    }
    // Youtube
    for (int i = 0; i < strlen(masterPass); i++) {
        myInPass.youtube[i] = masterPass[i] + strlen("youtube") * strlen(masterPass);
        while (myInPass.youtube[i] > 122 || myInPass.youtube[i] < 97) {
            if (myInPass.youtube[i] > 122) {
                myInPass.youtube[i] -= 26;
            } else if (myInPass.youtube[i] < 97) {
                myInPass.youtube[i] += 26;
            }
        }
    }
    // Gmail
    for (int i = 0; i < strlen(masterPass); i++) {
        myInPass.gmail[i] = masterPass[i] + strlen("gmail") * strlen(masterPass);
        while (myInPass.gmail[i] > 122 || myInPass.gmail[i] < 97) {
            if (myInPass.gmail[i] > 122) {
                myInPass.gmail[i] -= 26;
            } else if (myInPass.gmail[i] < 97) {
                myInPass.gmail[i] += 26;
            }
        }
    }
    // Outlook
    for (int i = 0; i < strlen(masterPass); i++) {
        myInPass.outlook[i] = masterPass[i] + strlen("outlook") * strlen(masterPass);
        while (myInPass.outlook[i] > 122 || myInPass.outlook[i] < 97) {
            if (myInPass.outlook[i] > 122) {
                myInPass.outlook[i] -= 26;
            } else if (myInPass.outlook[i] < 97) {
                myInPass.outlook[i] += 26;
            }
        }
    }
    // Yahoo
    for (int i = 0; i < strlen(masterPass); i++) {
        myInPass.yahoo[i] = masterPass[i] + strlen("yahoo") * strlen(masterPass);
        while (myInPass.yahoo[i] > 122 || myInPass.yahoo[i] < 97) {
            if (myInPass.yahoo[i] > 122) {
                myInPass.yahoo[i] -= 26;
            } else if (myInPass.yahoo[i] < 97) {
                myInPass.yahoo[i] += 26;
            }
        }
    }
    // Linkedin
    for (int i = 0; i < strlen(masterPass); i++) {
        myInPass.linkedin[i] = masterPass[i] + strlen("linkedin") * strlen(masterPass);
        while (myInPass.linkedin[i] > 122 || myInPass.linkedin[i] < 97) {
            if (myInPass.linkedin[i] > 122) {
                myInPass.linkedin[i] -= 26;
            } else if (myInPass.linkedin[i] < 97) {
                myInPass.linkedin[i] += 26;
            }
        }
    }
    // Pinterest
    for (int i = 0; i < strlen(masterPass); i++) {
        myInPass.pinterest[i] = masterPass[i] + strlen("pinterest") * strlen(masterPass);
        while (myInPass.pinterest[i] > 122 || myInPass.pinterest[i] < 97) {
            if (myInPass.pinterest[i] > 122) {
                myInPass.pinterest[i] -= 26;
            } else if (myInPass.pinterest[i] < 97) {
                myInPass.pinterest[i] += 26;
            }
        }
    }
}
