//
//  OTRPushManager.h
//  Off the Record
//
//  Created by Christopher Ballinger on 5/26/13.
//  Copyright (c) 2013 Chris Ballinger. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OTRProtocol.h"
#import "OTRPushAccount.h"

@class OTRPushAPIClient;

@interface OTRPushManager : NSObject <OTRProtocol>

@property (nonatomic) BOOL isConnected;
@property (nonatomic, strong) OTRPushAccount *account;
@property (nonatomic, strong) OTRPushAPIClient * httpClient;

- (void)refreshToken;

+ (void) registerForPushNotifications;

@end