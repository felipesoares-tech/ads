function trocaImagemEmBreve(){
    let img1 = document.getElementById('img-1')
    let img2 = document.getElementById('img-2')
    let img3 = document.getElementById('img-3')
    let img4 = document.getElementById('img-4')
    let img5 = document.getElementById('img-5')
    let img6 = document.getElementById('img-6')

    img1.setAttribute('src','assets/img/em-breve/img1.jpg')
    img2.setAttribute('src','assets/img/em-breve/img2.jpg')
    img3.setAttribute('src','assets/img/em-breve/img3.jpg')
    img4.setAttribute('src','assets/img/em-breve/img4.jpg')
    img5.setAttribute('src','assets/img/em-breve/img5.jpg')
    img6.setAttribute('src','assets/img/em-breve/img6.jpg')

    let btn1 = document.getElementById('bt-1')
    let btn2 = document.getElementById('bt-2')
    let btn3 = document.getElementById('bt-3')
    btn1.setAttribute('style','border-bottom: 5px solid #f9f9f9; padding-bottom: 5px;')
    btn2.removeAttribute('style')
    btn3.removeAttribute('style')
}

function trocaImagemMaisPopular(){
    let img1 = document.getElementById('img-1')
    let img2 = document.getElementById('img-2')
    let img3 = document.getElementById('img-3')
    let img4 = document.getElementById('img-4')
    let img5 = document.getElementById('img-5')
    let img6 = document.getElementById('img-6')

    img1.setAttribute('src','assets/img/mais-popular/img1.jpg')
    img2.setAttribute('src','assets/img/mais-popular/img2.jpg')
    img3.setAttribute('src','assets/img/mais-popular/img3.jpg')
    img4.setAttribute('src','assets/img/mais-popular/img4.jpg')
    img5.setAttribute('src','assets/img/mais-popular/img5.jpg')
    img6.setAttribute('src','assets/img/mais-popular/img6.jpg')

    let btn1 = document.getElementById('bt-1')
    let btn2 = document.getElementById('bt-2')
    let btn3 = document.getElementById('bt-3')
    btn2.setAttribute('style','border-bottom: 5px solid #f9f9f9; padding-bottom: 5px;')
    btn1.removeAttribute('style')
    btn3.removeAttribute('style')

   
}

function trocaImagemMaisNoStar(){
    let img1 = document.getElementById('img-1')
    let img2 = document.getElementById('img-2')
    let img3 = document.getElementById('img-3')
    let img4 = document.getElementById('img-4')
    let img5 = document.getElementById('img-5')
    let img6 = document.getElementById('img-6')

    img1.setAttribute('src','assets/img/mais-no-star+/img1.jpg')
    img2.setAttribute('src','assets/img/mais-no-star+/img2.jpg')
    img3.setAttribute('src','assets/img/mais-no-star+/img3.jpg')
    img4.setAttribute('src','assets/img/mais-no-star+/img4.jpg')
    img5.setAttribute('src','assets/img/mais-no-star+/img5.jpg')
    img6.setAttribute('src','assets/img/mais-no-star+/img6.jpg')

    let btn1 = document.getElementById('bt-1')
    let btn2 = document.getElementById('bt-2')
    let btn3 = document.getElementById('bt-3')
    btn3.setAttribute('style','border-bottom: 5px solid #f9f9f9; padding-bottom: 5px;')
    btn1.removeAttribute('style')
    btn2.removeAttribute('style')
}

function main(){
    let btn = document.getElementById('bt-1')
    btn.click()
}

main()