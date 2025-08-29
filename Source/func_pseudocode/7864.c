_$s16EyeCandyGraphics9CGSWindowV24addWindowToMovementGroup10withParent10connectionyAC_AA13CGSConnectionVtF
// local variable allocation has failed, the output may be wrong!
Swift::Void __swiftcall CGSWindow.addWindowToMovementGroup(withParent:connection:)(
        EyeCandyGraphics::CGSWindow withParent,
        EyeCandyGraphics::CGSConnection connection)
{
  _CGSAddWindowToWindowMovementGroup(*(_QWORD *)&connection.cid, *(_QWORD *)&withParent.wid);
}