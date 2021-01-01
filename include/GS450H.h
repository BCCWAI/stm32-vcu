
#ifndef GS450H_h
#define GS450H_h

/*  Communication with Lexus GS450H and potentiall any Toyota Hybrid inverter using sync serial

*/

#include <stdint.h>
#include "my_fp.h"
#include <libopencm3/stm32/usart.h>
#include <libopencm3/stm32/dma.h>
#include "digio.h"
#include "params.h"

#define MG2MAXSPEED 10000
#define MAX_COMMAND_SIZE 200

class GS450H
{
    		GS450H();
        ~GS450H();


	public:

static void ProcessHybrid(int8_t gear, int16_t torque);
static void ProcessMTH();
static int16_t dc_bus_voltage,temp_inv_water, temp_inv_inductor, mg1_speed, mg2_speed;
static void UpdateHTMState1Ms(int8_t gear, int16_t torque);

	private:

static void UpdateHTMParams(int8_t gear, int16_t torque);




};

#endif /* GS450H_h */
