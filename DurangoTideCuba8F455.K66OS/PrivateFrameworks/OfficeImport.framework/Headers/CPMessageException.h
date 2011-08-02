/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSException.h> // Unknown library
#import "OfficeImport-Structs.h"

@class CPMessageEntry;

__attribute__((visibility("hidden"),objc_exception))
@interface CPMessageException : NSException {
@private
	CPMessageEntry *m_entry;	// 20 = 0x14
}
+ (id)exceptionWithMessage:(CPTaggedMessageStructure *)message;	// 0x32d87739
+ (id)exceptionWithUntaggedMessage:(id)untaggedMessage;	// 0x32d8769d
+ (void)initialize;	// 0x32cb7219
+ (id)nsError:(id)error domain:(id)domain;	// 0x32d868c5
+ (void)raise:(CPTaggedMessageStructure *)raise;	// 0x32c14309
+ (void)raiseUntaggedMessage:(id)message;	// 0x32d87601
- (id)initWithMessage:(CPTaggedMessageStructure *)message;	// 0x32d87869
- (id)initWithUntaggedMessage:(id)untaggedMessage;	// 0x32d877dd
- (void)dealloc;	// 0x32c14629
- (id)description;	// 0x32d869bd
- (id)getEntry;	// 0x32d865c1
@end

