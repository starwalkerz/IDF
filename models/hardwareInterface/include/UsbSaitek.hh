/*
PURPOSE:
LIBRARY DEPENDENCIES: (
(hardwareInterface/src/UsbSaitek.cpp)
)
*/

/**
 * @trick_parse{everything}
 * @trick_link_dependency{hardwareInterface/src/UsbSaitek.cpp}
 */

#ifndef _USB_SAITEK_HH_
#define _USB_SAITEK_HH_

#include "hardwareInterface/include/UsbDevice.hh"
#include "inputAbstraction/include/Saitek.hh"

namespace idf {

/**
 * USB Saitek Pro Flight Rudder Pedals input device
 *
 * @author Derek Bankieris
 */
class UsbSaitek : public UsbDevice, public Saitek {

    public:

    /** @copydoc UsbChProPedals::UsbChProPedals */
    UsbSaitek(int vendorID = 0x06A3, int productID = 0x0763);

    void decode(const std::vector<unsigned char>& data);

};

}

#endif
