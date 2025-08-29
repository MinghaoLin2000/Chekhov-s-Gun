_$s16EyeCandyGraphics9CGSWindowV23removeFromMovementGroup10withParent10connectionyAC_AA13CGSConnectionVtF
// local variable allocation has failed, the output may be wrong!
Swift::Void __swiftcall CGSWindow.removeFromMovementGroup(withParent:connection:)(
        EyeCandyGraphics::CGSWindow withParent,
        EyeCandyGraphics::CGSConnection connection)
{
  _CGSRemoveWindowFromWindowMovementGroup(*(_QWORD *)&connection.cid, *(_QWORD *)&withParent.wid);
}