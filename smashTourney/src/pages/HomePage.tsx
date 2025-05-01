import './HomePage.css';
import { Button } from "@material-tailwind/react";
import type { ButtonProps } from "@material-tailwind/react";

const HomePage: React.FC = () =>
{

  return (
    <div className="flex flex-col items-center justify-center h-dvh w-dvw"> {/* center all content and take up entire viewport */}
      <div className="flex flex-col content-center text-center rounded shadow-md text-white m-2 text-4xl max-w-9/10 "> {/* max width is 90 percent of parent (viewport) inner flexbox to center content and text */}
        <h2 className="bg-black/25 rounded shadow-md text-6xl p-2 my-6 ">Welcome!</h2>

        <label htmlFor="username" >Username:</label>
        <input className="shrink bg-white m-5 rounded shadow-md " type="text" id="username" name="username" />

        <label htmlFor="password">Password:</label>
        <input className="shrink bg-white m-5 rounded shadow-md " type="password" id="password" name="password" />

        <div className='shrink flex flex-col text-2xl p-4 m-4 '>

          <Button variant="filled" >
          </Button>


          <a href="#" className="m-4 bg-black/25 rounded shadow-md">
            Or
          </a>

          <a href="#" className="p-2 shrink bg-green-500 hover:bg-green-700 text-white font-bold  rounded shadow-md transition duration-300 ease-in-out focus:outline-none focus:ring-2 focus:ring-green-400 focus:ring-opacity-75">
            Continue As Guest
          </a>

        </div>
      </div>
    </div>
  );
}

export default HomePage;
