let jogadorAtual = 'X';
let quadro = ['', '', '', '', '', '', '', '', ''];
let statusJogo = '';

function marcar(index) {
    if (quadro[index] === '' && statusJogo !== 'Fim de Jogo') {
        quadro[index] = jogadorAtual;
        document.getElementsByClassName('cell')[index].textoConteudo = jogadorAtual;
        checarStatusJogo();
        jogadorAtual = jogadorAtual === 'X' ? 'O' : 'X';
    }
}

function checarStatusJogo() {
    const ganharCondicoes = [
        [0, 1, 2], [3, 4, 5], [6, 7, 8], // Linhas
        [0, 3, 6], [1, 4, 7], [2, 5, 8], // Colunas
        [0, 4, 8], [2, 4, 6] // Diagonais
    ];

    for (let condition of ganharCondicoes) {
        const [a, b, c] = condition;
        if (board[a] && board[a] === board[b] && board[a] === board[c]) {
            statusJogo = 'Fim de Jogo';
            document.getElementById('status').textoConteudo = `Jogador ${jogadorAtual} venceu!`;
            return;
        }
    }

    if (!board.includes('')) {
        statusJogo = 'Fim de Jogo';
        document.getElementById('status').textoConteudo = 'Empate!';
        return;
    }
}

function resetarJogo() {
    jogadorAtual = 'X';
    quadro = ['', '', '', '', '', '', '', '', ''];
    statusJogo = '';
    document.getElementById('status').textoConteudo = '';
    Array.from(document.getElementsByClassName('cell')).forEach((cell, index) => {
        cell.textoConteudo = '';
    });
}
