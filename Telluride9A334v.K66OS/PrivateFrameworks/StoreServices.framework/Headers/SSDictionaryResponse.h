/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSURL, NSDictionary, NSNumber;

@interface SSDictionaryResponse : NSObject <NSCopying> {
@private
	NSDictionary *_dictionary;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *actions;	// G=0x32500b09; 
@property(readonly, assign, nonatomic) NSNumber *failureType;	// G=0x325012c5; 
@property(readonly, assign, nonatomic) NSArray *pingURLs;	// G=0x32501399; 
@property(readonly, assign, nonatomic) NSDictionary *responseDictionary;	// G=0x32501791; @synthesize=_dictionary
@property(readonly, assign, nonatomic, getter=isSupportedProtocolVersion) BOOL supportedProtocolVersion;	// G=0x325012e1; 
@property(readonly, assign, nonatomic) NSURL *versionMismatchURL;	// G=0x325014ed; 
- (id)init;	// 0x32500995
- (id)initWithResponseDictionary:(id)responseDictionary;	// 0x325009a9
- (id)_copyAccount;	// 0x325015b1
- (id)_valueForProtocolKey:(id)protocolKey;	// 0x3250173d
// declared property getter: - (id)actions;	// 0x32500b09
- (id)actionsWithActionType:(id)actionType;	// 0x325011c9
- (id)copyWithZone:(NSZone *)zone;	// 0x32500a95
- (void)dealloc;	// 0x32500a49
// declared property getter: - (id)failureType;	// 0x325012c5
// declared property getter: - (BOOL)isSupportedProtocolVersion;	// 0x325012e1
// declared property getter: - (id)pingURLs;	// 0x32501399
// declared property getter: - (id)responseDictionary;	// 0x32501791
// declared property getter: - (id)versionMismatchURL;	// 0x325014ed
@end

