/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <NSObject.h> // Unknown library
#import "CoreLocation-Structs.h"

@class GEOGeocodeRequest;

__attribute__((visibility("hidden")))
@interface CLGeocoderInternal : NSObject {
@private
	id _geocodeCompletionHandler;	// 4 = 0x4
	GEOGeocodeRequest *_request;	// 8 = 0x8
	dispatch_queue_s *_queue;	// 12 = 0xc
}
@end

