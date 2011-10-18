/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDateFormatter, NSMutableDictionary, NSNumberFormatter;
@protocol ATVReadWriteFeedResource;

__attribute__((visibility("hidden")))
@interface ATVFeedEvaluator : NSObject {
@private
	NSDateFormatter *_zuluDateFormatter;	// 4 = 0x4
	NSNumberFormatter *_numberFormatter;	// 8 = 0x8
	NSMutableDictionary *_dateFormatterCache;	// 12 = 0xc
	id<ATVReadWriteFeedResource> _feedResource;	// 16 = 0x10
}
@property(retain) id<ATVReadWriteFeedResource> feedResource;	// G=0x3415d1d5; S=0x3415d1e9; @synthesize=_feedResource
+ (id)evaluatePlist:(id)plist withFeedResource:(id)feedResource;	// 0x3415d089
- (id)init;	// 0x3415d0f1
- (id)_evaluateArguments:(id)arguments commandForErrorLogging:(id)errorLogging;	// 0x3415da15
- (id)_evaluateFunctionString:(id)string;	// 0x3415d895
- (id)_evaluateObject:(id)object withRecursionLevel:(int)recursionLevel;	// 0x3415d20d
- (id)_ifElse:(id)anElse;	// 0x3415ddbd
- (id)_localtime:(id)localtime;	// 0x3415dec1
- (id)_lookup:(id)lookup;	// 0x3415de85
- (id)_removePreferences:(id)preferences;	// 0x3415e1a1
- (id)_setPreference:(id)preference;	// 0x3415e0e5
- (void)dealloc;	// 0x3415d14d
// declared property getter: - (id)feedResource;	// 0x3415d1d5
// declared property setter: - (void)setFeedResource:(id)resource;	// 0x3415d1e9
@end

