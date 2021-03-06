/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface BRPreferences : NSObject {
@private
	NSString *_domain;	// 4 = 0x4
}
@property(readonly, retain) NSString *domain;	// G=0x33b60c6d; converted property
+ (id)sharedFrontRowPreferences;	// 0x33b6129d
- (id)initWithDomain:(id)domain;	// 0x33b60bc9
- (BOOL)boolForKey:(id)key;	// 0x33b60ef1
- (BOOL)boolForKey:(id)key withValueForMissingPrefs:(BOOL)missingPrefs;	// 0x33b60f41
- (BOOL)canSetPreferencesForKey:(id)key;	// 0x33b61021
- (void)dealloc;	// 0x33b60c21
- (id)descriptionForKey:(id)key;	// 0x33b60fd9
// converted property getter: - (id)domain;	// 0x33b60c6d
- (double)doubleForKey:(id)key;	// 0x33b60e49
- (double)doubleForKey:(id)key withValueForMissingPrefs:(double)missingPrefs;	// 0x33b60e99
- (float)floatForKey:(id)key;	// 0x33b60da9
- (float)floatForKey:(id)key withValueForMissingPrefs:(float)missingPrefs;	// 0x33b60df9
- (int)integerForKey:(id)key;	// 0x33b60d09
- (int)integerForKey:(id)key withValueForMissingPrefs:(int)missingPrefs;	// 0x33b60d59
- (BOOL)isLoggingEnabledForKey:(id)key;	// 0x33b611fd
- (id)logFilePathsForKey:(id)key;	// 0x33b6122d
- (id)objectForKey:(id)key;	// 0x33b60cc1
- (BOOL)setBool:(BOOL)aBool forKey:(id)key;	// 0x33b6115d
- (BOOL)setDouble:(double)aDouble forKey:(id)key;	// 0x33b61109
- (BOOL)setFloat:(float)aFloat forKey:(id)key;	// 0x33b610b9
- (BOOL)setInteger:(int)integer forKey:(id)key;	// 0x33b61069
- (BOOL)setObject:(id)object forKey:(id)key;	// 0x33b611ad
- (id)stringForKey:(id)key;	// 0x33b60f91
- (void)syncNow;	// 0x33b60c7d
@end

