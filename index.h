<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>ZOMATO CLONE</title>
    <link rel="stylesheet" href="style.css" />
    <!-- Google Fonts Start-->
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Merriweather:ital,wght@0,300;0,400;0,700;0,900;1,300;1,400;1,700;1,900&display=swap" rel="stylesheet">
    <!-- Google Fonts End-->
</head>
<body>
    <header>
        <nav class="navbar">
            <div class="navbar__brand">
                <img src="./assets/logo.png" alt="logo" class="brand__logo"/>
            </div>
            <div class="navbar__nav__items">
                <div class="nav__items">
                    <button class="button__primary">Order Food</button>
                </div>
            </div>
        </nav>
    </header>
    <main class="container">
        <section class="hero__container">
            <div class="hero__image__container">
                <img src="./assets/hero.jpg" alt="heroimage" class="hero__image"/>
                <img src="./assets/svg/heroShape.svg" alt="heroimageshape/" class="hero__image__shape">
                <img src="./assets/svg/herobgpattren.svg" alt="heroimageshape/" class="hero__image__pattern">
            </div>
            <div class="hero__description">
                <h1 class="hero__text">Order food from favourite restaurants near you.</h1>
                <button class="button__primary">Order Now</button>
            </div>
        </section>
        
        <section class="food__list__container">
                <h1 class="text-x1">Explore our menu</h1>
                <div class="food__list__container__diagonal"></div>
                <div class="food__menu__card__list">
                    <div class="food__menu__card">
                        <img src="./assets/burger.jpg" alt="burger" class="food__menu__card__image"/>
                        <div class="food__menu__card__details">
                            <h4 class="food__menu__card__title"><strong>Burgers</strong></h4>
                            <p>
                                Burger King
                                <span style="color: black;">+3</span>
                            </p>
                        </div>
                    </div>
                    <div style="margin-top: -1rem; margin-bottom: 1rem;" class="food__menu__card">
                        <img src="./assets/burger.jpg" alt="burger" class="food__menu__card__image"/>
                        <div class="food__menu__card__details">
                            <h4 class="food__menu__card__title"><strong>Burgers</strong></h4>
                            <p>
                                Burger King
                                <span style="color: black;">+3</span>
                            </p>
                        </div>
                    </div>
                    <div class="food__menu__card">
                        <img src="./assets/burger.jpg" alt="burger" class="food__menu__card__image"/>
                        <div class="food__menu__card__details">
                            <h4 class="food__menu__card__title"><strong>Burgers</strong></h4>
                            <p>
                                Burger King
                                <span style="color: black;">+3</span>
                            </p>
                        </div>
                    </div>
                </div>
        </section>
        <section class="restaurant__list__container">
            <div class="restaurant__list__text">
                <h4 class="text-x1">Order Food 100s</h4>
            </div>
            <div class="restaurant__list__images__container">
                <div class="restaurant__list__row1">
                    <img src="./assets/restaurant1.jpg" alt="r1" class="restaurant1"/>
                    <img src="./assets/restaurant2.jpg" alt="r2" class="restaurant2"/>
                </div>
                <div class="restaurant__list__row2">
                    <img src="./assets/restaurant3.jpg" alt="r3" class="restaurant3"/>
                    <img src="./assets/restaurant4.jpg" alt="r4" class="restaurant4"/>
                </div>
            </div>
        </section>
    </main>
</body>
</html>