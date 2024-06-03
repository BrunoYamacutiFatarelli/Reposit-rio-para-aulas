function filtraReceitas(ev){
    if ($(this).text() == "Almoço"){
        $(".cafeDaManha"). fadeOut();
        $(".almoco"). fadeIn();
        $(".cafeDaTarde"). fadeOut();
    } else if ($(this).text() == "cafeDaTarde"){
        $(".cafeDaManha"). fadeIn();
        $(".almoco"). fadeOut();
        $(".cafeDaTarde"). fadeOut();
    } else if ($(this).text() == "Café da Tarde"){
        $(".cafeDaManha"). fadeIn();
        $(".almoco"). fadeOut();
        $(".cafeDaTarde"). fadeOut();
    } else{
        $('main .col').fadeIn();
    }
}

function preencheListaCidades(resposta){
    let selectCidades = $('<select></select>');
    selectCidades.addClass('form-select');
    selectCidades.attr('nome', 'txtCidade');
    selectCidades.attr('id', 'txtCidade');
    for (let i = 0; i < resposta.length; i += 1){
        let optionCidade = $('<option></option>');
        optionCidade.val(resposta[i].nome);
        optionCidade.html(resposta[i].nome);
        selectCidades.append(optionCidade);
    }
    $('#cidadeHolder').html(selectCidades);
}

function carregaCidades(){
    let spinnerSpan = $('<span></span>');
    spinnerSpan.addClass('spinner-border');
    spinnerSpan.addClass('text-primary');
    spinnerSpan.attr('role','status');
    $('#cidadeHolder').html(spinnerSpan);
    let UFselecionada = $('#txtUF').find(':selected').val();
    $.ajax({
        url : 'https://servicodados.ibge.gov.br/api/v1/localidades/estados/'+UFselecionada+'/municipios'
    }).done(preencheListaCidades);
}

function preencheListaEstados(resposta){
    for(let i = 0; i < resposta.length; i += 1){
        let optionEstado = $('<option></option>');
        optionEstado.val(resposta[i].sigla);
        optionEstado.text(resposta[i].nome);
        $('#txtUF').append(optionEstado);
    }
    $('#txtUF').on('change',carregaCidades);
}

function carregaEstados(){
    let requisicao = $.ajax({
        url : "https://servicodados.ibge.gov.br/api/v1/localidades/estados?orderBy=nome"
    });
    requisicao.done(preencheListaEstados);
}

function impedeSubmissao(){
    let forms = document.getElementsByClassName('needs-validation');
    for (let i = 0;i < forms.length; i+=1){
        forms[i].addEventListener('submit', verificationValidate);
    }
    carregaEstados();
    $("#visibilidadeFiltros").on('click', alternaLista);
    $(".filterListLink a").on('click', filtraReceitas);
}

function verificationValidate(ev){
    if (!this.checkValidity()){
        ev.preventDefault();
        ev.stopPropagation();
    }
    this.classList.add('was-validated');
}
$(document).ready(impedeSubmissao);