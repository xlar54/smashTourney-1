
import { createRoot } from 'react-dom/client';
import './index.css';
import HomePage from './pages/HomePage.tsx';
import { BrowserRouter } from "react-router";
import { ThemeProvider } from "@material-tailwind/react";

createRoot(document.getElementById('root')!).render(
  <BrowserRouter>
    <ThemeProvider>
      <HomePage />.
    </ThemeProvider>
  </BrowserRouter>
)
