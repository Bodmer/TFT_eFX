/***************************************************************************************/
// The following class class adds additional graphics functions to the TFT_eSPI library.
// The class inherits the generic drawing graphics functions from the TFT_eSPI class.

// Created by Bodmer 15/11/2018
// See license.txt in root folder of library
/***************************************************************************************/

class TFT_eFX : public TFT_eSPI {

 public:

  TFT_eFX(TFT_eSPI *tft);

           // Draw a bezier curve of a defined colour between specified points
  void     drawBezier(int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t x2, int32_t y2, uint16_t color);  
  void     drawBezierSegment(int32_t x0, int32_t y0, int32_t x1, int32_t y1, int32_t x2, int32_t y2, uint16_t color);
 private:

  TFT_eSPI *_tft;

 protected:

  uint8_t  _efx;
};
