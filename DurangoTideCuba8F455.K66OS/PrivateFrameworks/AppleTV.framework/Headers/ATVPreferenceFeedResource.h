/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "ATVDictionaryFeedResource.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVPreferenceFeedResource : ATVDictionaryFeedResource {
@private
	NSString *_path;	// 12 = 0xc
	BOOL _dirty;	// 16 = 0x10
	unsigned _format;	// 20 = 0x14
	dispatch_queue_s *_prefsWriteQueue;	// 24 = 0x18
}
- (id)initWithPath:(id)path;	// 0x306ee41d
- (void)_savePrefs;	// 0x306ee5e9
- (void)clearFeedResources;	// 0x306ee699
- (void)dealloc;	// 0x306ee575
- (void)setFeedResource:(id)resource named:(id)named;	// 0x306ee711
@end
