/***************************************************************************************/
// The following class class adds additional graphics functions to the TFT_eSPI library.
// The class inherits the generic drawing graphics functions from the TFT_eSPI class.

// You can create your own grphics support library by using the myGraphicsFunction()
// example as a template.  The function code must be put in the TFT_eFX.cpp file.

// Add the function anme to the keywords.txt file if you want you function name
// highlighted in the IDE.

// Created by Bodmer 15/11/2018
// See license.txt in root folder of library
/***************************************************************************************/

class TFT_eFX : public TFT_eSPI {

 public:

  TFT_eFX(TFT_eSPI *tft);

  void     myGraphicsFunction(int32_t x, int32_t y, uint16_t color);

           // Draw a bezier curve of a defined colour between specified points
  void     drawBezier(int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t x2, int32_t y2, uint16_t color);  
  void     drawBezierSegment(int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t x2, int32_t y2, uint16_t color);

  private:

  TFT_eSPI *_tft;

 protected:

  uint8_t  _efx;
};
