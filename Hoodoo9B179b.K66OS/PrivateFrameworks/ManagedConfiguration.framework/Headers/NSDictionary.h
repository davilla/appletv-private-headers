/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSDictionary.h> // Unknown library
#import "ManagedConfiguration-Structs.h"


@interface NSDictionary (MCUtilities)
- (id)MCDeepCopy;	// 0x348a51c9
- (id)MCDeepCopyWithZone:(NSZone *)zone;	// 0x348a51b9
- (id)MCMutableDeepCopy;	// 0x348a51a5
- (id)MCMutableDeepCopyWithZone:(NSZone *)zone;	// 0x348a51f9
- (id)MCRetainOptionalNonZeroLengthStringKey:(id)key errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x348a5b3d
- (id)MCRetainOptionalObjectKey:(id)key type:(Class)type errorDomain:(id)domain invalidDataCode:(int)code invalidDataErrorString:(id)string outError:(id *)error;	// 0x348a5939
- (id)MCRetainRequiredNonZeroLengthStringKey:(id)key errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code5 invalidDataErrorString:(id)string6 outError:(id *)error;	// 0x348a59f5
- (id)MCRetainRequiredObjectKey:(id)key type:(Class)type errorDomain:(id)domain missingDataCode:(int)code missingDataErrorString:(id)string invalidDataCode:(int)code6 invalidDataErrorString:(id)string7 outError:(id *)error;	// 0x348a5841
@end

