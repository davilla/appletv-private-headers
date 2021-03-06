/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <NSObject.h> // Unknown library


@interface CLSimulationManager : NSObject {
@private
	double _locationDistance;	// 4 = 0x4
	double _locationInterval;	// 12 = 0xc
	double _locationSpeed;	// 20 = 0x14
	int _locationRepeatBehavior;	// 28 = 0x1c
	int _locationDeliveryBehavior;	// 32 = 0x20
}
@property(assign, nonatomic) int locationDeliveryBehavior;	// G=0x30fb5125; S=0x30fb4931; @synthesize=_locationDeliveryBehavior
@property(assign, nonatomic) double locationDistance;	// G=0x30fb50cd; S=0x30fb498d; @synthesize=_locationDistance
@property(assign, nonatomic) double locationInterval;	// G=0x30fb50e5; S=0x30fb49e1; @synthesize=_locationInterval
@property(assign, nonatomic) int locationRepeatBehavior;	// G=0x30fb5115; S=0x30fb4a89; @synthesize=_locationRepeatBehavior
@property(assign, nonatomic) double locationSpeed;	// G=0x30fb50fd; S=0x30fb4a35; @synthesize=_locationSpeed
- (id)init;	// 0x30fb44d5
- (void)appendSimulatedLocation:(id)location;	// 0x30fb4b0d
- (id)availableScenarios;	// 0x30fb463d
- (void)clearSimulatedCells;	// 0x30fb4e15
- (void)clearSimulatedLocations;	// 0x30fb4ad5
- (void)flush;	// 0x30fb5095
- (void)loadScenarioFromURL:(id)url;	// 0x30fb47ed
- (id)localizedNameForScenario:(id)scenario;	// 0x30fb4765
// declared property getter: - (int)locationDeliveryBehavior;	// 0x30fb5125
// declared property getter: - (double)locationDistance;	// 0x30fb50cd
// declared property getter: - (double)locationInterval;	// 0x30fb50e5
// declared property getter: - (int)locationRepeatBehavior;	// 0x30fb5115
// declared property getter: - (double)locationSpeed;	// 0x30fb50fd
- (id)scenariosPath;	// 0x30fb4565
- (void)selectScenario:(id)scenario;	// 0x30fb4769
// declared property setter: - (void)setLocationDeliveryBehavior:(int)behavior;	// 0x30fb4931
// declared property setter: - (void)setLocationDistance:(double)distance;	// 0x30fb498d
// declared property setter: - (void)setLocationInterval:(double)interval;	// 0x30fb49e1
// declared property setter: - (void)setLocationRepeatBehavior:(int)behavior;	// 0x30fb4a89
// declared property setter: - (void)setLocationSpeed:(double)speed;	// 0x30fb4a35
- (void)setSimulatedCell:(id)cell;	// 0x30fb4e4d
- (void)setSimulatedCellRegistrationStatus:(BOOL)status;	// 0x30fb4f55
- (void)setSimulatedWifiPower:(BOOL)power;	// 0x30fb5059
- (void)setWifiScanResults:(id)results;	// 0x30fb4f91
- (void)startCellSimulation;	// 0x30fb4ee5
- (void)startLocationSimulation;	// 0x30fb4da5
- (void)startWifiSimulation;	// 0x30fb4fe9
- (void)stopCellSimulation;	// 0x30fb4f1d
- (void)stopLocationSimulation;	// 0x30fb4ddd
- (void)stopWifiSimulation;	// 0x30fb5021
@end

