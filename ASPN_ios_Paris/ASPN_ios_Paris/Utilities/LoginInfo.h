//
//  LoginInfo.h
//  ASPN_ios_Paris
//
//  Created by SMJ_DEV on 03/06/2019.
//  Copyright © 2019 smj. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LoginInfo : NSObject

//User device Token 값
@property (nonatomic, retain) NSString *deviceToken;

//User Id
@property (nonatomic, retain) NSString *loginId;

//User Password
@property (nonatomic, retain) NSString *loginPwd;

//User companyId




@end

NS_ASSUME_NONNULL_END
