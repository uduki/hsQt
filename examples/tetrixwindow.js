function TetrixWindow(ui)
{
	this.ui = ui;

    var boardUi = ui.findChild("board");
    boardUi.nextPieceLabel = ui.findChild("nextPieceLabel");
    
    this.board = new TetrixBoard(boardUi, Qt.App);

    ui.findChild("startButton").clicked.connect(this.board, this.board.start);
    ui.findChild("quitButton").clicked.connect(Qt.App.quit);
    ui.findChild("pauseButton").clicked.connect(this.board, this.board.pause);
}

