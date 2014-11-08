#ifndef DEFAULT_THEME_WRITER
#define DEFAULT_THEME_WRITER

#include "../../XlsxSerializerCom/Common/Common.h"

namespace Writers
{
	class DefaultThemeWriter
	{
		XmlUtils::CStringWriter  m_oWriter;
		CString	m_sDir;
	public:
		DefaultThemeWriter(CString sDir):m_sDir(sDir)
		{
		}
		void Write()
		{
			CString s_Common;

			s_Common = _T("<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"yes\" ?>");
s_Common += _T("<a:theme xmlns:a=\"http://schemas.openxmlformats.org/drawingml/2006/main\" name=\"Office Theme\">");
  s_Common += _T("<a:themeElements>");
    s_Common += _T("<a:clrScheme name=\"Office\">");
      s_Common += _T("<a:dk1>");
        s_Common += _T("<a:sysClr val=\"windowText\" lastClr=\"000000\"/>");
      s_Common += _T("</a:dk1>");
      s_Common += _T("<a:lt1>");
        s_Common += _T("<a:sysClr val=\"window\" lastClr=\"FFFFFF\"/>");
      s_Common += _T("</a:lt1>");
      s_Common += _T("<a:dk2>");
        s_Common += _T("<a:srgbClr val=\"1F497D\"/>");
      s_Common += _T("</a:dk2>");
      s_Common += _T("<a:lt2>");
        s_Common += _T("<a:srgbClr val=\"EEECE1\"/>");
      s_Common += _T("</a:lt2>");
      s_Common += _T("<a:accent1>");
        s_Common += _T("<a:srgbClr val=\"4F81BD\"/>");
      s_Common += _T("</a:accent1>");
      s_Common += _T("<a:accent2>");
        s_Common += _T("<a:srgbClr val=\"C0504D\"/>");
      s_Common += _T("</a:accent2>");
      s_Common += _T("<a:accent3>");
        s_Common += _T("<a:srgbClr val=\"9BBB59\"/>");
      s_Common += _T("</a:accent3>");
      s_Common += _T("<a:accent4>");
        s_Common += _T("<a:srgbClr val=\"8064A2\"/>");
      s_Common += _T("</a:accent4>");
      s_Common += _T("<a:accent5>");
        s_Common += _T("<a:srgbClr val=\"4BACC6\"/>");
      s_Common += _T("</a:accent5>");
      s_Common += _T("<a:accent6>");
        s_Common += _T("<a:srgbClr val=\"F79646\"/>");
      s_Common += _T("</a:accent6>");
      s_Common += _T("<a:hlink>");
        s_Common += _T("<a:srgbClr val=\"0000FF\"/>");
      s_Common += _T("</a:hlink>");
      s_Common += _T("<a:folHlink>");
        s_Common += _T("<a:srgbClr val=\"800080\"/>");
      s_Common += _T("</a:folHlink>");
    s_Common += _T("</a:clrScheme>");
s_Common += _T("<a:fontScheme name=\"Office\">");
      s_Common += _T("<a:majorFont>");
        s_Common += _T("<a:latin typeface=\"Cambria\"/>");
        s_Common += _T("<a:ea typeface=\"\"/>");
        s_Common += _T("<a:cs typeface=\"\"/>");
        s_Common += _T("<a:font script=\"Jpan\" typeface=\"ＭＳ ゴシック\"/>");
        s_Common += _T("<a:font script=\"Hang\" typeface=\"맑은 고딕\"/>");
        s_Common += _T("<a:font script=\"Hans\" typeface=\"宋体\"/>");
        s_Common += _T("<a:font script=\"Hant\" typeface=\"新細明體\"/>");
        s_Common += _T("<a:font script=\"Arab\" typeface=\"Times New Roman\"/>");
        s_Common += _T("<a:font script=\"Hebr\" typeface=\"Times New Roman\"/>");
        s_Common += _T("<a:font script=\"Thai\" typeface=\"Angsana New\"/>");
        s_Common += _T("<a:font script=\"Ethi\" typeface=\"Nyala\"/>");
        s_Common += _T("<a:font script=\"Beng\" typeface=\"Vrinda\"/>");
        s_Common += _T("<a:font script=\"Gujr\" typeface=\"Shruti\"/>");
        s_Common += _T("<a:font script=\"Khmr\" typeface=\"MoolBoran\"/>");
        s_Common += _T("<a:font script=\"Knda\" typeface=\"Tunga\"/>");
        s_Common += _T("<a:font script=\"Guru\" typeface=\"Raavi\"/>");
        s_Common += _T("<a:font script=\"Cans\" typeface=\"Euphemia\"/>");
        s_Common += _T("<a:font script=\"Cher\" typeface=\"Plantagenet Cherokee\"/>");
        s_Common += _T("<a:font script=\"Yiii\" typeface=\"Microsoft Yi Baiti\"/>");
        s_Common += _T("<a:font script=\"Tibt\" typeface=\"Microsoft Himalaya\"/>");
        s_Common += _T("<a:font script=\"Thaa\" typeface=\"MV Boli\"/>");
        s_Common += _T("<a:font script=\"Deva\" typeface=\"Mangal\"/>");
        s_Common += _T("<a:font script=\"Telu\" typeface=\"Gautami\"/>");
        s_Common += _T("<a:font script=\"Taml\" typeface=\"Latha\"/>");
        s_Common += _T("<a:font script=\"Syrc\" typeface=\"Estrangelo Edessa\"/>");
        s_Common += _T("<a:font script=\"Orya\" typeface=\"Kalinga\"/>");
        s_Common += _T("<a:font script=\"Mlym\" typeface=\"Kartika\"/>");
        s_Common += _T("<a:font script=\"Laoo\" typeface=\"DokChampa\"/>");
        s_Common += _T("<a:font script=\"Sinh\" typeface=\"Iskoola Pota\"/>");
        s_Common += _T("<a:font script=\"Mong\" typeface=\"Mongolian Baiti\"/>");
        s_Common += _T("<a:font script=\"Viet\" typeface=\"Times New Roman\"/>");
        s_Common += _T("<a:font script=\"Uigh\" typeface=\"Microsoft Uighur\"/>");
      s_Common += _T("</a:majorFont>");
      s_Common += _T("<a:minorFont>");
        s_Common += _T("<a:latin typeface=\"Calibri\"/>");
        s_Common += _T("<a:ea typeface=\"\"/>");
        s_Common += _T("<a:cs typeface=\"\"/>");
        s_Common += _T("<a:font script=\"Jpan\" typeface=\"ＭＳ 明朝\"/>");
        s_Common += _T("<a:font script=\"Hang\" typeface=\"맑은 고딕\"/>");
        s_Common += _T("<a:font script=\"Hans\" typeface=\"宋体\"/>");
        s_Common += _T("<a:font script=\"Hant\" typeface=\"新細明體\"/>");
        s_Common += _T("<a:font script=\"Arab\" typeface=\"Arial\"/>");
        s_Common += _T("<a:font script=\"Hebr\" typeface=\"Arial\"/>");
        s_Common += _T("<a:font script=\"Thai\" typeface=\"Cordia New\"/>");
        s_Common += _T("<a:font script=\"Ethi\" typeface=\"Nyala\"/>");
        s_Common += _T("<a:font script=\"Beng\" typeface=\"Vrinda\"/>");
        s_Common += _T("<a:font script=\"Gujr\" typeface=\"Shruti\"/>");
        s_Common += _T("<a:font script=\"Khmr\" typeface=\"DaunPenh\"/>");
        s_Common += _T("<a:font script=\"Knda\" typeface=\"Tunga\"/>");
        s_Common += _T("<a:font script=\"Guru\" typeface=\"Raavi\"/>");
        s_Common += _T("<a:font script=\"Cans\" typeface=\"Euphemia\"/>");
        s_Common += _T("<a:font script=\"Cher\" typeface=\"Plantagenet Cherokee\"/>");
        s_Common += _T("<a:font script=\"Yiii\" typeface=\"Microsoft Yi Baiti\"/>");
        s_Common += _T("<a:font script=\"Tibt\" typeface=\"Microsoft Himalaya\"/>");
        s_Common += _T("<a:font script=\"Thaa\" typeface=\"MV Boli\"/>");
        s_Common += _T("<a:font script=\"Deva\" typeface=\"Mangal\"/>");
        s_Common += _T("<a:font script=\"Telu\" typeface=\"Gautami\"/>");
        s_Common += _T("<a:font script=\"Taml\" typeface=\"Latha\"/>");
        s_Common += _T("<a:font script=\"Syrc\" typeface=\"Estrangelo Edessa\"/>");
        s_Common += _T("<a:font script=\"Orya\" typeface=\"Kalinga\"/>");
        s_Common += _T("<a:font script=\"Mlym\" typeface=\"Kartika\"/>");
        s_Common += _T("<a:font script=\"Laoo\" typeface=\"DokChampa\"/>");
        s_Common += _T("<a:font script=\"Sinh\" typeface=\"Iskoola Pota\"/>");
        s_Common += _T("<a:font script=\"Mong\" typeface=\"Mongolian Baiti\"/>");
        s_Common += _T("<a:font script=\"Viet\" typeface=\"Arial\"/>");
        s_Common += _T("<a:font script=\"Uigh\" typeface=\"Microsoft Uighur\"/>");
      s_Common += _T("</a:minorFont>");
    s_Common += _T("</a:fontScheme>");
s_Common += _T("<a:fmtScheme name=\"Office\">");
      s_Common += _T("<a:fillStyleLst>");
        s_Common += _T("<a:solidFill>");
          s_Common += _T("<a:schemeClr val=\"phClr\"/>");
        s_Common += _T("</a:solidFill>");
        s_Common += _T("<a:gradFill rotWithShape=\"1\">");
          s_Common += _T("<a:gsLst>");
            s_Common += _T("<a:gs pos=\"0\">");
              s_Common += _T("<a:schemeClr val=\"phClr\">");
                s_Common += _T("<a:tint val=\"50000\"/>");
                s_Common += _T("<a:satMod val=\"300000\"/>");
              s_Common += _T("</a:schemeClr>");
            s_Common += _T("</a:gs>");
            s_Common += _T("<a:gs pos=\"35000\">");
              s_Common += _T("<a:schemeClr val=\"phClr\">");
                s_Common += _T("<a:tint val=\"37000\"/>");
                s_Common += _T("<a:satMod val=\"300000\"/>");
              s_Common += _T("</a:schemeClr>");
            s_Common += _T("</a:gs>");
            s_Common += _T("<a:gs pos=\"100000\">");
              s_Common += _T("<a:schemeClr val=\"phClr\">");
                s_Common += _T("<a:tint val=\"15000\"/>");
                s_Common += _T("<a:satMod val=\"350000\"/>");
              s_Common += _T("</a:schemeClr>");
            s_Common += _T("</a:gs>");
          s_Common += _T("</a:gsLst>");
          s_Common += _T("<a:lin ang=\"16200000\" scaled=\"1\"/>");
        s_Common += _T("</a:gradFill>");
        s_Common += _T("<a:gradFill rotWithShape=\"1\">");
          s_Common += _T("<a:gsLst>");
            s_Common += _T("<a:gs pos=\"0\">");
              s_Common += _T("<a:schemeClr val=\"phClr\">");
                s_Common += _T("<a:shade val=\"51000\"/>");
                s_Common += _T("<a:satMod val=\"130000\"/>");
              s_Common += _T("</a:schemeClr>");
            s_Common += _T("</a:gs>");
            s_Common += _T("<a:gs pos=\"80000\">");
              s_Common += _T("<a:schemeClr val=\"phClr\">");
                s_Common += _T("<a:shade val=\"93000\"/>");
                s_Common += _T("<a:satMod val=\"130000\"/>");
              s_Common += _T("</a:schemeClr>");
            s_Common += _T("</a:gs>");
            s_Common += _T("<a:gs pos=\"100000\">");
              s_Common += _T("<a:schemeClr val=\"phClr\">");
                s_Common += _T("<a:shade val=\"94000\"/>");
                s_Common += _T("<a:satMod val=\"135000\"/>");
              s_Common += _T("</a:schemeClr>");
            s_Common += _T("</a:gs>");
          s_Common += _T("</a:gsLst>");
          s_Common += _T("<a:lin ang=\"16200000\" scaled=\"0\"/>");
        s_Common += _T("</a:gradFill>");
      s_Common += _T("</a:fillStyleLst>");
      s_Common += _T("<a:lnStyleLst>");
        s_Common += _T("<a:ln w=\"9525\" cap=\"flat\" cmpd=\"sng\" algn=\"ctr\">");
          s_Common += _T("<a:solidFill>");
            s_Common += _T("<a:schemeClr val=\"phClr\">");
              s_Common += _T("<a:shade val=\"95000\"/>");
              s_Common += _T("<a:satMod val=\"105000\"/>");
            s_Common += _T("</a:schemeClr>");
          s_Common += _T("</a:solidFill>");
          s_Common += _T("<a:prstDash val=\"solid\"/>");
        s_Common += _T("</a:ln>");
        s_Common += _T("<a:ln w=\"25400\" cap=\"flat\" cmpd=\"sng\" algn=\"ctr\">");
          s_Common += _T("<a:solidFill>");
            s_Common += _T("<a:schemeClr val=\"phClr\"/>");
          s_Common += _T("</a:solidFill>");
          s_Common += _T("<a:prstDash val=\"solid\"/>");
        s_Common += _T("</a:ln>");
        s_Common += _T("<a:ln w=\"38100\" cap=\"flat\" cmpd=\"sng\" algn=\"ctr\">");
          s_Common += _T("<a:solidFill>");
            s_Common += _T("<a:schemeClr val=\"phClr\"/>");
          s_Common += _T("</a:solidFill>");
          s_Common += _T("<a:prstDash val=\"solid\"/>");
        s_Common += _T("</a:ln>");
      s_Common += _T("</a:lnStyleLst>");
      s_Common += _T("<a:effectStyleLst>");
        s_Common += _T("<a:effectStyle>");
          s_Common += _T("<a:effectLst>");
            s_Common += _T("<a:outerShdw blurRad=\"40000\" dist=\"20000\" dir=\"5400000\" rotWithShape=\"0\">");
              s_Common += _T("<a:srgbClr val=\"000000\">");
                s_Common += _T("<a:alpha val=\"38000\"/>");
              s_Common += _T("</a:srgbClr>");
            s_Common += _T("</a:outerShdw>");
          s_Common += _T("</a:effectLst>");
        s_Common += _T("</a:effectStyle>");
        s_Common += _T("<a:effectStyle>");
          s_Common += _T("<a:effectLst>");
            s_Common += _T("<a:outerShdw blurRad=\"40000\" dist=\"23000\" dir=\"5400000\" rotWithShape=\"0\">");
              s_Common += _T("<a:srgbClr val=\"000000\">");
                s_Common += _T("<a:alpha val=\"35000\"/>");
              s_Common += _T("</a:srgbClr>");
            s_Common += _T("</a:outerShdw>");
          s_Common += _T("</a:effectLst>");
        s_Common += _T("</a:effectStyle>");
        s_Common += _T("<a:effectStyle>");
          s_Common += _T("<a:effectLst>");
            s_Common += _T("<a:outerShdw blurRad=\"40000\" dist=\"23000\" dir=\"5400000\" rotWithShape=\"0\">");
              s_Common += _T("<a:srgbClr val=\"000000\">");
                s_Common += _T("<a:alpha val=\"35000\"/>");
              s_Common += _T("</a:srgbClr>");
            s_Common += _T("</a:outerShdw>");
          s_Common += _T("</a:effectLst>");
          s_Common += _T("<a:scene3d>");
            s_Common += _T("<a:camera  prst=\"orthographicFront\">");
              s_Common += _T("<a:rot lat=\"0\" lon=\"0\" rev=\"0\"/>");
            s_Common += _T("</a:camera >");
            s_Common += _T("<a:lightRig rig=\"threePt\" dir=\"t\">");
              s_Common += _T("<a:rot lat=\"0\" lon=\"0\" rev=\"1200000\"/>");
            s_Common += _T("</a:lightRig>");
          s_Common += _T("</a:scene3d>");
          s_Common += _T("<a:sp3d>");
            s_Common += _T("<a:bevelT w=\"63500\" h=\"25400\"/>");
          s_Common += _T("</a:sp3d>");
        s_Common += _T("</a:effectStyle>");
      s_Common += _T("</a:effectStyleLst>");
      s_Common += _T("<a:bgFillStyleLst>");
        s_Common += _T("<a:solidFill>");
          s_Common += _T("<a:schemeClr val=\"phClr\"/>");
        s_Common += _T("</a:solidFill>");
        s_Common += _T("<a:gradFill rotWithShape=\"1\">");
          s_Common += _T("<a:gsLst>");
            s_Common += _T("<a:gs pos=\"0\">");
              s_Common += _T("<a:schemeClr val=\"phClr\">");
                s_Common += _T("<a:tint val=\"40000\"/>");
                s_Common += _T("<a:satMod val=\"350000\"/>");
              s_Common += _T("</a:schemeClr>");
            s_Common += _T("</a:gs>");
            s_Common += _T("<a:gs pos=\"40000\">");
              s_Common += _T("<a:schemeClr val=\"phClr\">");
                s_Common += _T("<a:tint val=\"45000\"/>");
                s_Common += _T("<a:shade val=\"99000\"/>");
                s_Common += _T("<a:satMod val=\"350000\"/>");
              s_Common += _T("</a:schemeClr>");
            s_Common += _T("</a:gs>");
            s_Common += _T("<a:gs pos=\"100000\">");
              s_Common += _T("<a:schemeClr val=\"phClr\">");
                s_Common += _T("<a:shade val=\"20000\"/>");
                s_Common += _T("<a:satMod val=\"255000\"/>");
              s_Common += _T("</a:schemeClr>");
            s_Common += _T("</a:gs>");
          s_Common += _T("</a:gsLst>");
          s_Common += _T("<a:path path=\"circle\">");
            s_Common += _T("<a:fillToRect l=\"50000\" t=\"-80000\" r=\"50000\" b=\"180000\"/>");
          s_Common += _T("</a:path>");
        s_Common += _T("</a:gradFill>");
        s_Common += _T("<a:gradFill rotWithShape=\"1\">");
          s_Common += _T("<a:gsLst>");
            s_Common += _T("<a:gs pos=\"0\">");
              s_Common += _T("<a:schemeClr val=\"phClr\">");
                s_Common += _T("<a:tint val=\"80000\"/>");
                s_Common += _T("<a:satMod val=\"300000\"/>");
              s_Common += _T("</a:schemeClr>");
            s_Common += _T("</a:gs>");
            s_Common += _T("<a:gs pos=\"100000\">");
              s_Common += _T("<a:schemeClr val=\"phClr\">");
                s_Common += _T("<a:shade val=\"30000\"/>");
                s_Common += _T("<a:satMod val=\"200000\"/>");
              s_Common += _T("</a:schemeClr>");
            s_Common += _T("</a:gs>");
          s_Common += _T("</a:gsLst>");
          s_Common += _T("<a:path path=\"circle\">");
            s_Common += _T("<a:fillToRect l=\"50000\" t=\"50000\" r=\"50000\" b=\"50000\"/>");
          s_Common += _T("</a:path>");
        s_Common += _T("</a:gradFill>");
      s_Common += _T("</a:bgFillStyleLst>");
    s_Common += _T("</a:fmtScheme>");
  s_Common += _T("</a:themeElements>");
  s_Common += _T("<a:objectDefaults/>");
  s_Common += _T("<a:extraClrSchemeLst/>");
s_Common += _T("</a:theme>");

			m_oWriter.WriteString(s_Common);

            OOX::CPath fileName = m_sDir + _T("\\word\\theme\\theme1.xml");

            CFile oFile;
            oFile.CreateFile(fileName.GetPath());
			oFile.WriteStringUTF8(m_oWriter.GetData());
			oFile.CloseFile();
		}
	};
}
#endif	// #ifndef DEFAULT_THEME_WRITER
