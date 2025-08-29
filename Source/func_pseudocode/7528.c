_$s16EyeCandyGraphics13CGSConnectionV17defaultConnectionACvau
int *CGSConnection.defaultConnection.unsafeMutableAddressor()
{
  if ( qword_10002A388 != -1 )
    swift_once(&qword_10002A388, sub_1000123F8);
  return &static CGSConnection.defaultConnection;
}