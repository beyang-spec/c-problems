
    printf("Enter an integer:");
    scanf("%d", &num);

    if (num%3==0){
        printf("%d is a multiple by 3");
    }

    else if (num%5==0){
        printf("%d is a multiple by 5");

    }
    else if (num%3==0 && num%5==0) {
        printf("%d is both multiple by 3 and 5");

    }