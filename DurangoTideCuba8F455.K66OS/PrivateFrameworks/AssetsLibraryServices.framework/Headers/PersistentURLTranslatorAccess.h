/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <NSObject.h> // Unknown library
#import "CLLocationManagerDelegate.h"

@class CLLocationManager;

@interface PersistentURLTranslatorAccess : NSObject <CLLocationManagerDelegate> {
	CLLocationManager *_locationManager;	// 4 = 0x4
	id _resultsBlock;	// 8 = 0x8
}
- (void)_informDelegateOfThatAccessIsAllowed:(int)thatAccessIsAllowed;	// 0x336fb239
- (id)assetLibraryFrameworkBundle;	// 0x336fb285
- (void)checkDataAccess:(id)access;	// 0x336fb3a9
- (void)dealloc;	// 0x336fb34d
- (void)locationManager:(id)manager didFailWithError:(id)error;	// 0x336fb305
- (void)locationManager:(id)manager didUpdateHeading:(id)heading;	// 0x336fb335
- (void)locationManager:(id)manager didUpdateToLocation:(id)location fromLocation:(id)location3;	// 0x336fb31d
@end

