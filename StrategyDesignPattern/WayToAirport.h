#ifndef WAYTOAIRPORT_H
#define WAYTOAIRPORT_H

class WayToAirport {
public:
    virtual void goToAirport(int amount) = 0;
    virtual ~WayToAirport() = default;
};

#endif
