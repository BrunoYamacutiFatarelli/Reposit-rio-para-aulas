let currentPlayer = 'X';
let board = ['', '', '', '', '', '', '', '', ''];
let gameStatus = '';

function placeMark(index) {
    if (board[index] === '' && gameStatus !== 'Game Over') {
        board[index] = currentPlayer;
        document.getElementsByClassName('cell')[index].textContent = currentPlayer;
        checkGameStatus();
        currentPlayer = currentPlayer === 'X' ? 'O' : 'X';
    }
}

function checkGameStatus() {
    const winningConditions = [
        [0, 1, 2], [3, 4, 5], [6, 7, 8], // Linhas
        [0, 3, 6], [1, 4, 7], [2, 5, 8], // Colunas
        [0, 4, 8], [2, 4, 6] // Diagonais
    ];

    for (let condition of winningConditions) {
        const [a, b, c] = condition;
        if (board[a] && board[a] === board[b] && board[a] === board[c]) {
            gameStatus = 'Game Over';
            document.getElementById('status').textContent = `Jogador ${currentPlayer} venceu!`;
            return;
        }
    }

    if (!board.includes('')) {
        gameStatus = 'Game Over';
        document.getElementById('status').textContent = 'Empate!';
        return;
    }
}

function resetGame() {
    currentPlayer = 'X';
    board = ['', '', '', '', '', '', '', '', ''];
    gameStatus = '';
    document.getElementById('status').textContent = '';
    Array.from(document.getElementsByClassName('cell')).forEach((cell, index) => {
        cell.textContent = '';
    });
}
