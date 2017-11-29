/**
 * Created by Acans angrycans@gmail.com on 2017/4/1
 * 路由入口
 */


import * as React from 'react';

import Home from './home';

import SideBar from "./sidebar";
import { DrawerNavigator } from "react-navigation";
const App = DrawerNavigator(
	{
		Home: { screen: Home }
	},
	{
		contentComponent: props => <SideBar {...props} />
	}
);
export default App;
