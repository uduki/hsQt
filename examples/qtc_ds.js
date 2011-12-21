function connectDsSlot(sigobj, signam, sltobj, sltnam, slot) {
    sigobj.ui.dmo.connectDynamic(signam, sltobj, sltnam, slot);
}

function connectDsCall(ths, signam) {
    rso = ths.ui.findChild(signam);
    ths.ui[signam] = rso.connectDynamic;
}
