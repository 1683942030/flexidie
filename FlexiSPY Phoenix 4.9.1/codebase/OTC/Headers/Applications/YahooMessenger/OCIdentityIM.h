/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "OCIdentityIM.h"
#import "OCIdentity.h"
//#import "NSObject.h"
#import "OCIdentityIM.h"

@class OCStatusMessage, UIImage, NSString;

@protocol OCIdentityIM <NSObject>
@property(readonly, copy, nonatomic) NSString* networkSpecifier;
@end

@interface OCIdentityIM : OCIdentity <OCIdentityIM> {
	NSString* networkSpecifier;
	NSString* firstName;
	NSString* lastName;
	OCStatusMessage* status;
	int availability;
}
@property(copy, nonatomic) NSString* networkSpecifier;
@property(copy, nonatomic) NSString* firstName;
@property(copy, nonatomic) NSString* lastName;
@property(assign, nonatomic) int availability;
@property(retain, nonatomic) OCStatusMessage* status;
@property(readonly, assign, nonatomic, getter=iconName) NSString* networkIconName;
@property(readonly, assign, nonatomic, getter=icon) UIImage* networkIcon;
@property(readonly, copy, nonatomic) NSString* networkDisplayName;
@property(readonly, retain, nonatomic, getter=rawID) NSString* userID;
+(id)identityWithRawIdentifier:(id)rawIdentifier;
+(id)identityWithIdentifier:(id)identifier andNetworkSpecifier:(id)specifier;
-(id)initWithIdentifier:(id)identifier andNetworkSpecifier:(id)specifier;
-(id)initWithRawIdentifier:(id)rawIdentifier;
-(oneway void)dealloc;
-(id)serviceIdentifier;
-(id)localizedStringForCapability:(id)capability;
-(id)defaultCapability;
-(id)description;
-(BOOL)isEqual:(id)equal;
-(unsigned)hash;
@end

@interface OCIdentityIM (DataCacheAdditions)
+(id)tableName;
@end

