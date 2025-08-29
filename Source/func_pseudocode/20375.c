__Z21_liteDrawImageToSheetP9CGContextP7CGImagei6CGSize6CGRect
void __fastcall _liteDrawImageToSheet(CGContext *a1, CGImageRef image, int a3, CGSize a4, CGRect a5)
{
  double height; // d10
  double width; // d11
  double y; // d12
  double x; // d13
  double v9; // d8
  double v10; // d9
  unsigned int v14; // w21
  unsigned int v15; // w0
  int v16; // w23
  double v17; // d2
  double v18; // d3
  unsigned __int64 v19; // x24
  unsigned __int64 v20; // x25
  double v21; // d0
  double v22; // d1
  bool v23; // nf
  double v24; // d4
  double v25; // d2
  bool v26; // nf
  int v27; // w8
  double v28; // d3
  double v29; // d4
  double v30; // d3
  double v31; // d4
  double v32; // d5
  CGFloat v33; // d8
  CGFloat v34; // d9
  CGFloat v35; // d10
  CGFloat v36; // d11
  CGAffineTransform v37; // [xsp+0h] [xbp-A0h] BYREF
  CGRect v38; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  CGRect v39; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  height = a5.size.height;
  width = a5.size.width;
  y = a5.origin.y;
  x = a5.origin.x;
  v9 = a4.height;
  v10 = a4.width;
  v14 = CGImageGetWidth(image);
  v15 = CGImageGetHeight(image);
  v16 = v15;
  if ( x <= v10 - (x + width) )
    v17 = v10 - (x + width);
  else
    v17 = x;
  if ( v9 - (y + height) <= y )
    v18 = y;
  else
    v18 = v9 - (y + height);
  if ( a3 <= 4 )
    v19 = v14;
  else
    v19 = v15;
  if ( a3 <= 4 )
    v20 = v15;
  else
    v20 = v14;
  v21 = (double)(int)v20;
  v22 = (double)(int)v19;
  v23 = v10 > v9 && v22 < v21;
  if ( v23 || v10 < v9 && v22 > v21 )
  {
    v24 = v17;
    v25 = v10;
  }
  else
  {
    v24 = v18;
    v18 = v17;
    v25 = v9;
    v9 = v10;
  }
  if ( v18 == 0.0 && v24 == 0.0 && v20 < 2 * v19 && 2 * v20 > v19 && (v9 >= v22 ? (v26 = v25 < v21) : (v26 = 1), !v26) )
  {
    v27 = 1;
    v28 = v9;
    v29 = v25;
  }
  else
  {
    v27 = 0;
    v28 = v9 - v18 - v18;
    v29 = v25 - v24 - v24;
  }
  v30 = v28 / v22;
  v31 = v29 / v21;
  if ( v30 <= v31 )
    v32 = v31;
  else
    v32 = v30;
  if ( v30 >= v31 )
    v30 = v31;
  if ( v27 )
    v30 = v32;
  v33 = (v9 - v22 * v30) * 0.5;
  v34 = (v25 - v21 * v30) * 0.5;
  v35 = v30 * v22;
  v36 = v30 * v21;
  CGContextSaveGState(a1);
  v38.origin.x = v33;
  v38.origin.y = v34;
  v38.size.width = v35;
  v38.size.height = v36;
  _lite_page_transform(&v37, v38, v19, v20, a3, 0, a3 > 4);
  CGContextConcatCTM(a1, &v37);
  v39.size.width = (double)(int)v14;
  v39.size.height = (double)v16;
  v39.origin.x = 0.0;
  v39.origin.y = 0.0;
  CGContextDrawImage(a1, v39, image);
  CGContextRestoreGState(a1);
}