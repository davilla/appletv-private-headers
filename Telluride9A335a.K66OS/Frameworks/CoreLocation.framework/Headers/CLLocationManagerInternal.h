/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "CoreLocation-Structs.h"
#import <NSObject.h> // Unknown library

@protocol CLLocationManagerDelegate;

__attribute__((visibility("hidden")))
@interface CLLocationManagerInternal : NSObject {
@private
	CLClientRef fClient;	// 4 = 0x4
	id<CLLocationManagerDelegate> fDelegate;	// 8 = 0x8
	double fDistanceFilter;	// 12 = 0xc
	double fDesiredAccuracy;	// 20 = 0x14
	BOOL fUpdatingLocation;	// 28 = 0x1c
	XXStruct_g7LRlB fLocation;	// 32 = 0x20
	BOOL fCapabilitiesValid;	// 132 = 0x84
	struct {
		double bestAccuracy;
	} fCapabilities;	// 136 = 0x88
	BOOL fUpdatingHeading;	// 144 = 0x90
	double fHeadingFilter;	// 148 = 0x94
	int fHeadingOrientation;	// 156 = 0x9c
	BOOL fPersistentMonitoringEnabled;	// 160 = 0xa0
	BOOL fLocationServicesPreferencesDialogEnabled;	// 161 = 0xa1
	BOOL fPreviousAuthorizationStatusValid;	// 162 = 0xa2
	int fPreviousAuthorizationStatus;	// 164 = 0xa4
}
- (id)initWithInfo:(id)info bundleIdentifier:(id)identifier bundle:(id)bundle;	// 0x3029c249
- (void)dealloc;	// 0x3029c395
@end

