/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "NSObject.h"

@class NSString;

@protocol MSASStateMachineBase <NSObject>
@property(assign, nonatomic) __weak id delegate;
@property(retain, nonatomic) NSString *personID;
// declared property getter: - (id)delegate;
// declared property getter: - (id)personID;
// declared property setter: - (void)setDelegate:(id)delegate;
// declared property setter: - (void)setPersonID:(id)anId;
- (id)status;
@end
