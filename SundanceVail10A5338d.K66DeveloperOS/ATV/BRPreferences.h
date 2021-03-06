/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRPreferences : XXUnknownSuperclass {
	NSString *_domain;	// 4 = 0x4
}
@property(readonly, retain) NSString *domain;	// G=0x374f85; converted property
+ (id)sharedFrontRowPreferences;	// 0x3755b5
- (id)initWithDomain:(id)domain;	// 0x374ee1
- (BOOL)boolForKey:(id)key;	// 0x375205
- (BOOL)boolForKey:(id)key withValueForMissingPrefs:(BOOL)missingPrefs;	// 0x375255
- (BOOL)canSetPreferencesForKey:(id)key;	// 0x375335
- (void)dealloc;	// 0x374f39
- (id)descriptionForKey:(id)key;	// 0x3752ed
// converted property getter: - (id)domain;	// 0x374f85
- (double)doubleForKey:(id)key;	// 0x375161
- (double)doubleForKey:(id)key withValueForMissingPrefs:(double)missingPrefs;	// 0x3751b1
- (float)floatForKey:(id)key;	// 0x3750c1
- (float)floatForKey:(id)key withValueForMissingPrefs:(float)missingPrefs;	// 0x375111
- (int)integerForKey:(id)key;	// 0x375021
- (int)integerForKey:(id)key withValueForMissingPrefs:(int)missingPrefs;	// 0x375071
- (BOOL)isLoggingEnabledForKey:(id)key;	// 0x375511
- (id)logFilePathsForKey:(id)key;	// 0x37553d
- (id)objectForKey:(id)key;	// 0x374fd9
- (BOOL)setBool:(BOOL)aBool forKey:(id)key;	// 0x375471
- (BOOL)setDouble:(double)aDouble forKey:(id)key;	// 0x37541d
- (BOOL)setFloat:(float)aFloat forKey:(id)key;	// 0x3753cd
- (BOOL)setInteger:(int)integer forKey:(id)key;	// 0x37537d
- (BOOL)setObject:(id)object forKey:(id)key;	// 0x3754c1
- (id)stringForKey:(id)key;	// 0x3752a5
- (void)syncNow;	// 0x374f95
@end

