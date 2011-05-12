/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CFXPreferencesSource.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface CFXPreferencesCompatibilitySource : CFXPreferencesSource {
}
- (CFDictionaryRef)copyDictionary;	// 0x32ea0769
- (CFArrayRef)copyKeyList;	// 0x32ea0a35
- (void *)getValueForKey:(CFStringRef)key;	// 0x32ea2019
- (void)setValue:(void *)value forKey:(CFStringRef)key;	// 0x32ea062d
- (unsigned char)synchronize;	// 0x32ea068d
@end

